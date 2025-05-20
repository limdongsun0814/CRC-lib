import os
path = "C:\\Users\\asme1\\git\\CRC-lib\\examples\\cpp"



for name in os.listdir():
    print(name)
    os.rename(name,name.replace("-","_"))








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


def resoureCPP(name):
    src = ""
    file=open(name,"r")

    for f in file:
        # std::cin.get(); 
        if  f.find("get")>0:
            print("aaaaaaa")
            
        else:
            src+=f
    w=open(name,"w")
    w.write(src)
    w.close()
    # print(src)

# resoureCPP("crc16_arc.cpp")