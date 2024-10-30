nmap j gjzz
nmap k gkzz
vmap j gjzz
vmap k gkzz

nmap gl $
nmap gh ^
vmap gl $
vmap gh ^

exmap pre_tab obcommand workspace:previous-tab
nmap H :pre_tab
exmap next_tab obcommand workspace:next-tab
nmap L :next_tab

exmap back obcommand app:go-back
nmap <C-o> :back
exmap forward obcommand app:go-forward
nmap <C-i> :forward
