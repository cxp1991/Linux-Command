-----------------------------------------------------------------------
1. 
	cp <source> <destination>
VD:
	cp ~/hello.c /temp

	copy 1 file từ thư mục nguồn đến thư mục đích
------------------------------------------------------------------------ 
2. 
	cp -r <source>	<destination>
VD:
	cp -r HocTap/ /media
	
	copy thư mục nguồn tới đích
------------------------------------------------------------------------ 
3. 
	cp -avr <source> <destination>
VD:
	cp -avr *.c /Desktop

	copy nhieuf file từ nguồn tới đích

4. Show progress:
   =============
	#!/bin/sh
	cp_p()
	{
	   strace -q -ewrite cp -- "${1}" "${2}" 2>&1 \
	      | awk '{
		count += $NF
		    if (count % 10 == 0) {
		       percent = count / total_size * 100
		       printf "%3d%% [", percent
		       for (i=0;i<=percent;i++)
		          printf "="
		       printf ">"
		       for (i=percent;i<100;i++)
		          printf " "
		       printf "]\r"
		    }
		 }
		 END { print "" }' total_size=$(stat -c '%s' "${1}") count=0
	}



