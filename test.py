import subprocess,os,crcmod
result=subprocess.run(["./Crc16Msb"],capture_output=True,text=True,check=True)
output = result.stdout
print(output,"a")

crc16,crc16_check = {},{}
for out in output.split("\n"):
    print(out)
    if(len(out.split()))>0:
        crc16[out.split()[0].replace(":","")]=out.split()[1]

print(crc16)

for name in os.listdir("src"):
    n=name.split(".")[0]
    if name.split(".")[1]=="h" and n!="Crc16Lsb" and n!="Crc16Msb":
        cmd = "g++ examples/cpp/crc16.cpp src/Crc16Msb.cpp -o Crc16Msb"
        subprocess.run(["g++","examples/cpp/"+n+".cpp","src/"+n+".cpp","-o", "check"])
        
        result=subprocess.run(["./check"],capture_output=True,text=True,check=True)
        output = result.stdout
        if(len(output.split()))>0:
            crc16_check[output.split()[0].replace(":","").upper()]=output.split()[1]
        print(n,len(output.split()))
print(crc16_check)

for key in crc16:
    print(crc16[key]==crc16_check[key],crc16[key],crc16_check[key])


