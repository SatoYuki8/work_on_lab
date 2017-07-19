all:	

add_half:	add_half.head add_half.rb
	ruby add_half.rb gensec > add_half.tmp
	cat add_half.head add_half.tmp > add_half.scr
	rm -rf *.tmp

comp:	
	ruby fivebit_comp.rb gensec > tmp
	cat fivebit_comp.head tmp > fivebit_comp.scr
	rm tmp

subshi:	sub_shift.scr
	rm -rf sub_shift.tmp

sub_shift.scr:	sub_shift.tmp sub_shift.head
	cat sub_shift.head sub_shift.tmp > $@

sub_shift.tmp:	sub_shift.rb
	ruby $< gensec > $@


aors:	add_or_sub.scr
	rm -rf add_or_sub.tmp

add_or_sub.scr:	add_or_sub.tmp add_or_sub.head
	cat add_or_sub.head add_or_sub.tmp > $@

add_or_sub.tmp:	add_or_sub.rb
	ruby $< gensec > $@








distclean:
	rm -rf *~ *scr