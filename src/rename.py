import os
path = "C:\\Users\\asme1\\git\\CRC-lib\\src"

def resoureCPP(name):
    src = ""
    file=open(name,"r")

    for f in file:
        if  len(f.split())>0:
            if  f.split()[0] == "#include" :
                src+=f.lower().replace("-","_")+"\n"
            elif f.find("::")>0:
                # uint16_t CRC16Cdma2000::calculate(const uint8_t *data, uint8_t length){
                arr = [f.split("::")[0].split()[0],f.split("::")[1]]
                print(f,arr)
                src+=' '.join(arr)+"\n"
            else:
                src+=f
        else:
            src+=f
    w=open(name,"w")
    w.write(src)
    w.close()
    print(src)

# resoureCPP("crc16_cdma2000.cpp")

for name in os.listdir():
    if(name.split(".")[1]=="cpp"):
        resoureCPP(name)








def resourceH(name):
    src = ""
    file=open(name,"r")

    for f in file:
        if  len(f.split())>0:
            if  f.split()[0] == "class" or f.split()[0]=="};" or f.split()[0]=="public:":
                pass
            elif f.split()[0]=="static":
                src+=' '.join(f.split()[1:])+"\n"
            else:
                src+=f
        else:
            src+=f
    w=open(name,"w")
    w.write(src)
    w.close()
    print(src)