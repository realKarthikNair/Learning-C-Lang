#!/usr/bin/python3
import os

md_file=open(f"readme.md","w"); sno=1
for i in sorted(os.listdir("programs")):
    path=os.path.join("programs", i)
    file=open(path, 'r')
    data= file.readlines(); j=0
    try:
        flag=False; flag1=1
        rt=1
        while True:
            title=f"### {data[j]}"; line_1=f"### {sno}. {data[j]}"
            if data[0][0:2]=='//' and flag1==1:
                md_file.write(line_1);j+=1; sno+=1
                flag1=0
            elif data[0][0:2]=="/*" and flag1==1:
                md_file.write(line_1)
                j+=1
                flag=True
                flag1=0
                sno+=1
            elif j==0 and flag1==1:
                md_file.write(f"### {sno}.\n")
                sno+=1
                flag1=0
                j+=1
            elif flag==True:
                if data[j][-3:-1]=="*/":
                    md_file.write(title)
                    j+=1
                    flag=False
                else:
                    md_file.write(title)
                    j+=1
            else:
                md_file.write(f"\t{data[j]}")
                j+=1
    except:
        md_file.write("\n\n")
        continue
    print(f"{output_filename} saved successfully at {output_path} !")
    




# done
