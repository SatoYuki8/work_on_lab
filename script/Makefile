all:	

half:	add_half.scr
	rm -rf add_half.tmp

add_half.scr:	add_half.tmp add_half.head
	cat add_half.head add_half.tmp > $@

add_half.tmp:	add_half.rb
	ruby $< gensec > $@


flopoco:	flopoco_half.scr
	rm -rf flopoco_half.tmp

flopoco_half.scr:	flopoco_half.tmp add_half.head.flopoco
	cat add_half.head.flopoco flopoco_half.tmp > $@

flopoco_half.tmp:	flopoco_half.rb
	ruby $< gensec > $@


half_add:	add_half_add.scr
	rm -rf add_half_add.tmp

add_half_add.scr:	add_half_add.tmp add_half.head
	cat add_half.head add_half_add.tmp > $@

add_half_add.tmp:	add_half_add.rb
	ruby $< gensec > $@



distclean:
	rm -rf *~ *scr