all:	

half:	add_half.scr
	rm -rf add_half.tmp

add_half.scr:	add_half.tmp add_half.head
	cat add_half.head add_half.tmp > $@

add_half.tmp:	add_half.rb
	ruby $< gensec > $@


half_add:	add_half_add.scr
	rm -rf add_half_add.tmp

add_half_add.scr:	add_half_add.tmp add_half.head
	cat add_half.head add_half_add.tmp > $@

add_half_add.tmp:	add_half_add.rb
	ruby $< gensec > $@

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



eirs:	exp_inc_right_shift.scr
	rm -rf exp_inc_right_shift.tmp

exp_inc_right_shift.scr:	exp_inc_right_shift.tmp exp_inc_right_shift.head
	cat exp_inc_right_shift.head exp_inc_right_shift.tmp > $@

exp_inc_right_shift.tmp:	exp_inc_right_shift.rb
	ruby $< gensec > $@







distclean:
	rm -rf *~ *scr