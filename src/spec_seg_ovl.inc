/*
./make_spec_seg_ovl.sh による自動生成ファイルです。
編集およびレジストは禁止されています。
*/

beginseg
	name "ovl_En_GirlA"
	flags OBJECT
	after "ovl_En_Test"
	include "z_en_girlA.o"
	include "z_en_girlA.rel"
endseg

beginseg
	name "ovl_En_Part"
	flags OBJECT
	after "ovl_En_GirlA"
	include "z_en_part.o"
	include "z_en_part.rel"
endseg

beginseg
	name "ovl_En_Light"
	flags OBJECT
	after "ovl_En_Part"
	include "z_en_light.o"
	include "z_en_light.rel"
endseg

beginseg
	name "ovl_En_Door"
	flags OBJECT
	after "ovl_En_Light"
	include "z_en_door.o"
	include "z_en_door.rel"
endseg

beginseg
	name "ovl_En_Box"
	flags OBJECT
	after "ovl_En_Door"
	include "z_en_box.o"
	include "z_en_box.rel"
endseg

beginseg
	name "ovl_En_Pametfrog"
	flags OBJECT
	after "ovl_En_Box"
	include "z_en_pametfrog.o"
	include "z_en_pametfrog.rel"
endseg

beginseg
	name "ovl_En_Okuta"
	flags OBJECT
	after "ovl_En_Pametfrog"
	include "z_en_okuta.o"
	include "z_en_okuta.rel"
endseg

beginseg
	name "ovl_En_Bom"
	flags OBJECT
	after "ovl_En_Okuta"
	include "z_en_bom.o"
	include "z_en_bom.rel"
endseg

beginseg
	name "ovl_En_Wallmas"
	flags OBJECT
	after "ovl_En_Bom"
	include "z_en_wallmas.o"
	include "z_en_wallmas.rel"
endseg

beginseg
	name "ovl_En_Dodongo"
	flags OBJECT
	after "ovl_En_Wallmas"
	include "z_en_dodongo.o"
	include "z_en_dodongo.rel"
endseg

beginseg
	name "ovl_En_Firefly"
	flags OBJECT
	after "ovl_En_Dodongo"
	include "z_en_firefly.o"
	include "z_en_firefly.rel"
endseg

beginseg
	name "ovl_En_Horse"
	flags OBJECT
	after "ovl_En_Firefly"
	include "z_en_horse.o"
	include "z_en_horse.rel"
endseg

beginseg
	name "ovl_En_Arrow"
	flags OBJECT
	after "ovl_En_Horse"
	include "z_en_arrow.o"
	include "z_en_arrow.rel"
endseg

beginseg
	name "ovl_En_Elf"
	flags OBJECT
	after "ovl_En_Arrow"
	include "z_en_elf.o"
	include "z_en_elf.rel"
endseg

beginseg
	name "ovl_En_Niw"
	flags OBJECT
	after "ovl_En_Elf"
	include "z_en_niw.o"
	include "z_en_niw.rel"
endseg

beginseg
	name "ovl_En_Tite"
	flags OBJECT
	after "ovl_En_Niw"
	include "z_en_tite.o"
	include "z_en_tite.rel"
endseg

beginseg
	name "ovl_En_Peehat"
	flags OBJECT
	after "ovl_En_Tite"
	include "z_en_peehat.o"
	include "z_en_peehat.rel"
endseg

beginseg
	name "ovl_En_Holl"
	flags OBJECT
	after "ovl_En_Peehat"
	include "z_en_holl.o"
	include "z_en_holl.rel"
endseg

beginseg
	name "ovl_En_Dinofos"
	flags OBJECT
	after "ovl_En_Holl"
	include "z_en_dinofos.o"
	include "z_en_dinofos.rel"
endseg

beginseg
	name "ovl_En_Hata"
	flags OBJECT
	after "ovl_En_Dinofos"
	include "z_en_hata.o"
	include "z_en_hata.rel"
endseg

beginseg
	name "ovl_En_Zl1"
	flags OBJECT
	after "ovl_En_Hata"
	include "z_en_girlB.o"
	include "z_en_girlB.rel"
endseg

beginseg
	name "ovl_En_Viewer"
	flags OBJECT
	after "ovl_En_Zl1"
	include "z_en_viewer.o"
	include "z_en_viewer.rel"
endseg

beginseg
	name "ovl_En_Bubble"
	flags OBJECT
	after "ovl_En_Viewer"
	include "z_en_bubble.o"
	include "z_en_bubble.rel"
endseg

beginseg
	name "ovl_Door_Shutter"
	flags OBJECT
	after "ovl_En_Bubble"
	include "z_door_shutter.o"
	include "z_door_shutter.rel"
endseg

beginseg
	name "ovl_En_Boom"
	flags OBJECT
	after "ovl_Door_Shutter"
	include "z_en_boom.o"
	include "z_en_boom.rel"
endseg

beginseg
	name "ovl_En_Torch2"
	flags OBJECT
	after "ovl_En_Boom"
	include "z_en_torch2.o"
	include "z_en_torch2.rel"
endseg

beginseg
	name "ovl_En_Minifrog"
	flags OBJECT
	after "ovl_En_Torch2"
	include "z_en_minifrog.o"
	include "z_en_minifrog.rel"
endseg

beginseg
	name "ovl_En_St"
	flags OBJECT
	after "ovl_En_Minifrog"
	include "z_en_st.o"
	include "z_en_st.rel"
endseg

beginseg
	name "ovl_Obj_Wturn"
	flags OBJECT
	after "ovl_En_St"
	include "z_obj_wturn.o"
	include "z_obj_wturn.rel"
endseg

beginseg
	name "ovl_En_River_Sound"
	flags OBJECT
	after "ovl_Obj_Wturn"
	include "z_en_river_sound.o"
	include "z_en_river_sound.rel"
endseg

beginseg
	name "ovl_En_Ossan"
	flags OBJECT
	after "ovl_En_River_Sound"
	include "z_en_oB1.o"
	include "z_en_oB1.rel"
endseg

beginseg
	name "ovl_En_Famos"
	flags OBJECT
	after "ovl_En_Ossan"
	include "z_en_famos.o"
	include "z_en_famos.rel"
endseg

beginseg
	name "ovl_En_Bombf"
	flags OBJECT
	after "ovl_En_Famos"
	include "z_en_bombf.o"
	include "z_en_bombf.rel"
endseg

beginseg
	name "ovl_En_Am"
	flags OBJECT
	after "ovl_En_Bombf"
	include "z_en_am.o"
	include "z_en_am.rel"
endseg

beginseg
	name "ovl_En_Dekubaba"
	flags OBJECT
	after "ovl_En_Am"
	include "z_en_dekubaba.o"
	include "z_en_dekubaba.rel"
endseg

beginseg
	name "ovl_En_M_Fire1"
	flags OBJECT
	after "ovl_En_Dekubaba"
	include "z_en_m_fire1.o"
	include "z_en_m_fire1.rel"
endseg

beginseg
	name "ovl_En_M_Thunder"
	flags OBJECT
	after "ovl_En_M_Fire1"
	include "z_en_m_thunder.o"
	include "z_en_m_thunder.rel"
endseg

beginseg
	name "ovl_Bg_Breakwall"
	flags OBJECT
	after "ovl_En_M_Thunder"
	include "z_bg_breakwall.o"
	include "z_bg_breakwall.rel"
endseg

beginseg
	name "ovl_Door_Warp1"
	flags OBJECT
	after "ovl_Bg_Breakwall"
	include "z_door_warp1.o"
	include "z_door_warp1.rel"
endseg

beginseg
	name "ovl_Obj_Syokudai"
	flags OBJECT
	after "ovl_Door_Warp1"
	include "z_obj_syokudai.o"
	include "z_obj_syokudai.rel"
endseg

beginseg
	name "ovl_Item_B_Heart"
	flags OBJECT
	after "ovl_Obj_Syokudai"
	include "z_item_b_heart.o"
	include "z_item_b_heart.rel"
endseg

beginseg
	name "ovl_En_Dekunuts"
	flags OBJECT
	after "ovl_Item_B_Heart"
	include "z_en_dekunuts.o"
	include "z_en_dekunuts.rel"
endseg

beginseg
	name "ovl_En_Bbfall"
	flags OBJECT
	after "ovl_En_Dekunuts"
	include "z_en_bbfall.o"
	include "z_en_bbfall.rel"
endseg

beginseg
	name "ovl_Arms_Hook"
	flags OBJECT
	after "ovl_En_Bbfall"
	include "z_arms_hook.o"
	include "z_arms_hook.rel"
endseg

beginseg
	name "ovl_En_Bb"
	flags OBJECT
	after "ovl_Arms_Hook"
	include "z_en_bb.o"
	include "z_en_bb.rel"
endseg

beginseg
	name "ovl_Bg_Keikoku_Spr"
	flags OBJECT
	after "ovl_En_Bb"
	include "z_bg_keikoku_spr.o"
	include "z_bg_keikoku_spr.rel"
endseg

beginseg
	name "ovl_En_Wood02"
	flags OBJECT
	after "ovl_Bg_Keikoku_Spr"
	include "z_en_wood02.o"
	include "z_en_wood02.rel"
endseg

beginseg
	name "ovl_En_Death"
	flags OBJECT
	after "ovl_En_Wood02"
	include "z_en_death.o"
	include "z_en_death.rel"
endseg

beginseg
	name "ovl_En_Minideath"
	flags OBJECT
	after "ovl_En_Death"
	include "z_en_minideath.o"
	include "z_en_minideath.rel"
endseg

beginseg
	name "ovl_En_Vm"
	flags OBJECT
	after "ovl_En_Minideath"
	include "z_en_vm.o"
	include "z_en_vm.rel"
endseg

beginseg
	name "ovl_Demo_Effect"
	flags OBJECT
	after "ovl_En_Vm"
	include "z_demo_effect.o"
	include "z_demo_effect.rel"
endseg

beginseg
	name "ovl_Demo_Kankyo"
	flags OBJECT
	after "ovl_Demo_Effect"
	include "z_demo_kankyo.o"
	include "z_demo_kankyo.rel"
endseg

beginseg
	name "ovl_En_Floormas"
	flags OBJECT
	after "ovl_Demo_Kankyo"
	include "z_en_floormas.o"
	include "z_en_floormas.rel"
endseg

beginseg
	name "ovl_En_Rd"
	flags OBJECT
	after "ovl_En_Floormas"
	include "z_en_rd.o"
	include "z_en_rd.rel"
endseg

beginseg
	name "ovl_Bg_F40_Flift"
	flags OBJECT
	after "ovl_En_Rd"
	include "z_bg_f40_flift.o"
	include "z_bg_f40_flift.rel"
endseg

beginseg
	name "ovl_Obj_Mure"
	flags OBJECT
	after "ovl_Bg_F40_Flift"
	include "z_obj_mure.o"
	include "z_obj_mure.rel"
endseg

beginseg
	name "ovl_En_Sw"
	flags OBJECT
	after "ovl_Obj_Mure"
	include "z_en_sw.o"
	include "z_en_sw.rel"
endseg

beginseg
	name "ovl_Object_Kankyo"
	flags OBJECT
	after "ovl_En_Sw"
	include "z_object_kankyo.o"
	include "z_object_kankyo.rel"
endseg

beginseg
	name "ovl_En_Horse_Link_Child"
	flags OBJECT
	after "ovl_Object_Kankyo"
	include "z_en_horse_link_child.o"
	include "z_en_horse_link_child.rel"
endseg

beginseg
	name "ovl_Door_Ana"
	flags OBJECT
	after "ovl_En_Horse_Link_Child"
	include "z_door_ana.o"
	include "z_door_ana.rel"
endseg

beginseg
	name "ovl_En_Encount1"
	flags OBJECT
	after "ovl_Door_Ana"
	include "z_en_encount1.o"
	include "z_en_encount1.rel"
endseg

beginseg
	name "ovl_Demo_Tre_Lgt"
	flags OBJECT
	after "ovl_En_Encount1"
	include "z_demo_tre_lgt.o"
	include "z_demo_tre_lgt.rel"
endseg

beginseg
	name "ovl_En_Encount2"
	flags OBJECT
	after "ovl_Demo_Tre_Lgt"
	include "z_en_encount2.o"
	include "z_en_encount2.rel"
endseg

beginseg
	name "ovl_En_Fire_Rock"
	flags OBJECT
	after "ovl_En_Encount2"
	include "z_en_fire_rock.o"
	include "z_en_fire_rock.rel"
endseg

beginseg
	name "ovl_Bg_Ctower_Rot"
	flags OBJECT
	after "ovl_En_Fire_Rock"
	include "z_bg_ctower_rot.o"
	include "z_bg_ctower_rot.rel"
endseg

beginseg
	name "ovl_Mir_Ray"
	flags OBJECT
	after "ovl_Bg_Ctower_Rot"
	include "z_mir_ray.o"
	include "z_mir_ray.rel"
endseg

beginseg
	name "ovl_En_Sb"
	flags OBJECT
	after "ovl_Mir_Ray"
	include "z_en_sb.o"
	include "z_en_sb.rel"
endseg

beginseg
	name "ovl_En_Bigslime"
	flags OBJECT
	after "ovl_En_Sb"
	include "z_en_bigslime.o"
	include "z_en_bigslime.rel"
endseg

beginseg
	name "ovl_En_Karebaba"
	flags OBJECT
	after "ovl_En_Bigslime"
	include "z_en_karebaba.o"
	include "z_en_karebaba.rel"
endseg

beginseg
	name "ovl_En_In"
	flags OBJECT
	after "ovl_En_Karebaba"
	include "z_en_in.o"
	include "z_en_in.rel"
endseg

beginseg
	name "ovl_En_Bom_Chu"
	flags OBJECT
	after "ovl_En_In"
	include "z_en_bom_chu.o"
	include "z_en_bom_chu.rel"
endseg

beginseg
	name "ovl_En_Horse_Game_Check"
	flags OBJECT
	after "ovl_En_Bom_Chu"
	include "z_en_horse_game_check.o"
	include "z_en_horse_game_check.rel"
endseg

beginseg
	name "ovl_En_Rr"
	flags OBJECT
	after "ovl_En_Horse_Game_Check"
	include "z_en_rr.o"
	include "z_en_rr.rel"
endseg

beginseg
	name "ovl_En_Fr"
	flags OBJECT
	after "ovl_En_Rr"
	include "z_en_fr.o"
	include "z_en_fr.rel"
endseg

beginseg
	name "ovl_Obj_Oshihiki"
	flags OBJECT
	after "ovl_En_Fr"
	include "z_obj_oshihiki.o"
	include "z_obj_oshihiki.rel"
endseg

beginseg
	name "ovl_Eff_Dust"
	flags OBJECT
	after "ovl_Obj_Oshihiki"
	include "z_eff_dust.o"
	include "z_eff_dust.rel"
endseg

beginseg
	name "ovl_Bg_Umajump"
	flags OBJECT
	after "ovl_Eff_Dust"
	include "z_bg_umajump.o"
	include "z_bg_umajump.rel"
endseg

beginseg
	name "ovl_En_Insect"
	flags OBJECT
	after "ovl_Bg_Umajump"
	include "z_en_mushi.o"
	include "z_en_mushi.rel"
endseg

beginseg
	name "ovl_En_Butte"
	flags OBJECT
	after "ovl_En_Insect"
	include "z_en_choo.o"
	include "z_en_choo.rel"
endseg

beginseg
	name "ovl_En_Fish"
	flags OBJECT
	after "ovl_En_Butte"
	include "z_en_sakana.o"
	include "z_en_sakana.rel"
endseg

beginseg
	name "ovl_Item_Etcetera"
	flags OBJECT
	after "ovl_En_Fish"
	include "z_item_etcetera.o"
	include "z_item_etcetera.rel"
endseg

beginseg
	name "ovl_Arrow_Fire"
	flags OBJECT
	after "ovl_Item_Etcetera"
	include "z_arrow_fire.o"
	include "z_arrow_fire.rel"
endseg

beginseg
	name "ovl_Arrow_Ice"
	flags OBJECT
	after "ovl_Arrow_Fire"
	include "z_arrow_ice.o"
	include "z_arrow_ice.rel"
endseg

beginseg
	name "ovl_Arrow_Light"
	flags OBJECT
	after "ovl_Arrow_Ice"
	include "z_arrow_light.o"
	include "z_arrow_light.rel"
endseg

beginseg
	name "ovl_Obj_Kibako"
	flags OBJECT
	after "ovl_Arrow_Light"
	include "z_obj_kibako.o"
	include "z_obj_kibako.rel"
endseg

beginseg
	name "ovl_Obj_Tsubo"
	flags OBJECT
	after "ovl_Obj_Kibako"
	include "z_obj_tsubo.o"
	include "z_obj_tsubo.rel"
endseg

beginseg
	name "ovl_En_Ik"
	flags OBJECT
	after "ovl_Obj_Tsubo"
	include "z_en_ik.o"
	include "z_en_ik.rel"
endseg

beginseg
	name "ovl_Demo_Shd"
	flags OBJECT
	after "ovl_En_Ik"
	include "z_demo_shd.o"
	include "z_demo_shd.rel"
endseg

beginseg
	name "ovl_En_Dns"
	flags OBJECT
	after "ovl_Demo_Shd"
	include "z_en_dns.o"
	include "z_en_dns.rel"
endseg

beginseg
	name "ovl_Elf_Msg"
	flags OBJECT
	after "ovl_En_Dns"
	include "z_elf_msg.o"
	include "z_elf_msg.rel"
endseg

beginseg
	name "ovl_En_Honotrap"
	flags OBJECT
	after "ovl_Elf_Msg"
	include "z_en_honotrap.o"
	include "z_en_honotrap.rel"
endseg

beginseg
	name "ovl_En_Tubo_Trap"
	flags OBJECT
	after "ovl_En_Honotrap"
	include "z_en_tubo_trap.o"
	include "z_en_tubo_trap.rel"
endseg

beginseg
	name "ovl_Obj_Ice_Poly"
	flags OBJECT
	after "ovl_En_Tubo_Trap"
	include "z_obj_ice_poly.o"
	include "z_obj_ice_poly.rel"
endseg

beginseg
	name "ovl_En_Fz"
	flags OBJECT
	after "ovl_Obj_Ice_Poly"
	include "z_en_fz.o"
	include "z_en_fz.rel"
endseg

beginseg
	name "ovl_En_Kusa"
	flags OBJECT
	after "ovl_En_Fz"
	include "z_en_kusa.o"
	include "z_en_kusa.rel"
endseg

beginseg
	name "ovl_Obj_Bean"
	flags OBJECT
	after "ovl_En_Kusa"
	include "z_obj_bean.o"
	include "z_obj_bean.rel"
endseg

beginseg
	name "ovl_Obj_Bombiwa"
	flags OBJECT
	after "ovl_Obj_Bean"
	include "z_obj_bombiwa.o"
	include "z_obj_bombiwa.rel"
endseg

beginseg
	name "ovl_Obj_Switch"
	flags OBJECT
	after "ovl_Obj_Bombiwa"
	include "z_obj_switch.o"
	include "z_obj_switch.rel"
endseg

beginseg
	name "ovl_Obj_Lift"
	flags OBJECT
	after "ovl_Obj_Switch"
	include "z_obj_lift.o"
	include "z_obj_lift.rel"
endseg

beginseg
	name "ovl_Obj_Hsblock"
	flags OBJECT
	after "ovl_Obj_Lift"
	include "z_obj_hsblock.o"
	include "z_obj_hsblock.rel"
endseg

beginseg
	name "ovl_En_Okarina_Tag"
	flags OBJECT
	after "ovl_Obj_Hsblock"
	include "z_en_okarina_tag.o"
	include "z_en_okarina_tag.rel"
endseg

beginseg
	name "ovl_En_Goroiwa"
	flags OBJECT
	after "ovl_En_Okarina_Tag"
	include "z_en_gr.o"
	include "z_en_gr.rel"
endseg

beginseg
	name "ovl_En_Daiku"
	flags OBJECT
	after "ovl_En_Goroiwa"
	include "z_en_daiku.o"
	include "z_en_daiku.rel"
endseg

beginseg
	name "ovl_En_Nwc"
	flags OBJECT
	after "ovl_En_Daiku"
	include "z_en_nwc.o"
	include "z_en_nwc.rel"
endseg

beginseg
	name "ovl_Item_Inbox"
	flags OBJECT
	after "ovl_En_Nwc"
	include "z_item_inbox.o"
	include "z_item_inbox.rel"
endseg

beginseg
	name "ovl_En_Ge1"
	flags OBJECT
	after "ovl_Item_Inbox"
	include "z_en_ge1.o"
	include "z_en_ge1.rel"
endseg

beginseg
	name "ovl_Obj_Blockstop"
	flags OBJECT
	after "ovl_En_Ge1"
	include "z_obj_blockstop.o"
	include "z_obj_blockstop.rel"
endseg

beginseg
	name "ovl_En_Sda"
	flags OBJECT
	after "ovl_Obj_Blockstop"
	include "z_en_sda.o"
	include "z_en_sda.rel"
endseg

beginseg
	name "ovl_En_Clear_Tag"
	flags OBJECT
	after "ovl_En_Sda"
	include "z_en_clear_tag.o"
	include "z_en_clear_tag.rel"
endseg

beginseg
	name "ovl_En_Gm"
	flags OBJECT
	after "ovl_En_Clear_Tag"
	include "z_en_gm.o"
	include "z_en_gm.rel"
endseg

beginseg
	name "ovl_En_Ms"
	flags OBJECT
	after "ovl_En_Gm"
	include "z_en_ms.o"
	include "z_en_ms.rel"
endseg

beginseg
	name "ovl_En_Hs"
	flags OBJECT
	after "ovl_En_Ms"
	include "z_en_hs.o"
	include "z_en_hs.rel"
endseg

beginseg
	name "ovl_Bg_Ingate"
	flags OBJECT
	after "ovl_En_Hs"
	include "z_bg_ingate.o"
	include "z_bg_ingate.rel"
endseg

beginseg
	name "ovl_En_Kanban"
	flags OBJECT
	after "ovl_Bg_Ingate"
	include "z_en_kanban.o"
	include "z_en_kanban.rel"
endseg

beginseg
	name "ovl_En_Attack_Niw"
	flags OBJECT
	after "ovl_En_Kanban"
	include "z_en_attack_niw.o"
	include "z_en_attack_niw.rel"
endseg

beginseg
	name "ovl_En_Mk"
	flags OBJECT
	after "ovl_En_Attack_Niw"
	include "z_en_mk.o"
	include "z_en_mk.rel"
endseg

beginseg
	name "ovl_En_Owl"
	flags OBJECT
	after "ovl_En_Mk"
	include "z_en_owl.o"
	include "z_en_owl.rel"
endseg

beginseg
	name "ovl_En_Ishi"
	flags OBJECT
	after "ovl_En_Owl"
	include "z_en_ishi.o"
	include "z_en_ishi.rel"
endseg

beginseg
	name "ovl_Obj_Hana"
	flags OBJECT
	after "ovl_En_Ishi"
	include "z_obj_hana.o"
	include "z_obj_hana.rel"
endseg

beginseg
	name "ovl_Obj_Lightswitch"
	flags OBJECT
	after "ovl_Obj_Hana"
	include "z_obj_lightswitch.o"
	include "z_obj_lightswitch.rel"
endseg

beginseg
	name "ovl_Obj_Mure2"
	flags OBJECT
	after "ovl_Obj_Lightswitch"
	include "z_obj_mure2.o"
	include "z_obj_mure2.rel"
endseg

beginseg
	name "ovl_En_Fu"
	flags OBJECT
	after "ovl_Obj_Mure2"
	include "z_en_fu.o"
	include "z_en_fu.rel"
endseg

beginseg
	name "ovl_En_Stream"
	flags OBJECT
	after "ovl_En_Fu"
	include "z_en_stream.o"
	include "z_en_stream.rel"
endseg

beginseg
	name "ovl_En_Mm"
	flags OBJECT
	after "ovl_En_Stream"
	include "z_en_mm.o"
	include "z_en_mm.rel"
endseg

beginseg
	name "ovl_En_Weather_Tag"
	flags OBJECT
	after "ovl_En_Mm"
	include "z_en_weather_tag.o"
	include "z_en_weather_tag.rel"
endseg

beginseg
	name "ovl_En_Ani"
	flags OBJECT
	after "ovl_En_Weather_Tag"
	include "z_en_ani.o"
	include "z_en_ani.rel"
endseg

beginseg
	name "ovl_En_Js"
	flags OBJECT
	after "ovl_En_Ani"
	include "z_en_js.o"
	include "z_en_js.rel"
endseg

beginseg
	name "ovl_En_Okarina_Effect"
	flags OBJECT
	after "ovl_En_Js"
	include "z_en_okarina_effect.o"
	include "z_en_okarina_effect.rel"
endseg

beginseg
	name "ovl_En_Mag"
	flags OBJECT
	after "ovl_En_Okarina_Effect"
	include "z_en_mag.o"
	include "z_en_mag.rel"
endseg

beginseg
	name "ovl_Elf_Msg2"
	flags OBJECT
	after "ovl_En_Mag"
	include "z_elf_msg2.o"
	include "z_elf_msg2.rel"
endseg

beginseg
	name "ovl_Bg_F40_Swlift"
	flags OBJECT
	after "ovl_Elf_Msg2"
	include "z_bg_f40_swlift.o"
	include "z_bg_f40_swlift.rel"
endseg

beginseg
	name "ovl_En_Kakasi"
	flags OBJECT
	after "ovl_Bg_F40_Swlift"
	include "z_en_kakasi.o"
	include "z_en_kakasi.rel"
endseg

beginseg
	name "ovl_Obj_Makeoshihiki"
	flags OBJECT
	after "ovl_En_Kakasi"
	include "z_obj_makeoshihiki.o"
	include "z_obj_makeoshihiki.rel"
endseg

beginseg
	name "ovl_Oceff_Spot"
	flags OBJECT
	after "ovl_Obj_Makeoshihiki"
	include "z_oceff_spot.o"
	include "z_oceff_spot.rel"
endseg

beginseg
	name "ovl_En_Torch"
	flags OBJECT
	after "ovl_Oceff_Spot"
	include "z_en_torch.o"
	include "z_en_torch.rel"
endseg

beginseg
	name "ovl_Shot_Sun"
	flags OBJECT
	after "ovl_En_Torch"
	include "z_shot_sun.o"
	include "z_shot_sun.rel"
endseg

beginseg
	name "ovl_Obj_Roomtimer"
	flags OBJECT
	after "ovl_Shot_Sun"
	include "z_obj_roomtimer.o"
	include "z_obj_roomtimer.rel"
endseg

beginseg
	name "ovl_En_Ssh"
	flags OBJECT
	after "ovl_Obj_Roomtimer"
	include "z_en_ssh.o"
	include "z_en_ssh.rel"
endseg

beginseg
	name "ovl_Oceff_Wipe"
	flags OBJECT
	after "ovl_En_Ssh"
	include "z_oceff_wipe.o"
	include "z_oceff_wipe.rel"
endseg

beginseg
	name "ovl_Effect_Ss_Dust"
	flags OBJECT
	after "ovl_Oceff_Wipe"
	include "z_eff_ss_dust.o"
	include "z_eff_ss_dust.rel"
endseg

beginseg
	name "ovl_Effect_Ss_KiraKira"
	flags OBJECT
	after "ovl_Effect_Ss_Dust"
	include "z_eff_ss_kirakira.o"
	include "z_eff_ss_kirakira.rel"
endseg

beginseg
	name "ovl_Effect_Ss_Bomb2"
	flags OBJECT
	after "ovl_Effect_Ss_KiraKira"
	include "z_eff_ss_bomb2.o"
	include "z_eff_ss_bomb2.rel"
endseg

beginseg
	name "ovl_Effect_Ss_Blast"
	flags OBJECT
	after "ovl_Effect_Ss_Bomb2"
	include "z_eff_ss_blast.o"
	include "z_eff_ss_blast.rel"
endseg

beginseg
	name "ovl_Effect_Ss_G_Spk"
	flags OBJECT
	after "ovl_Effect_Ss_Blast"
	include "z_eff_ss_g_spk.o"
	include "z_eff_ss_g_spk.rel"
endseg

beginseg
	name "ovl_Effect_Ss_D_Fire"
	flags OBJECT
	after "ovl_Effect_Ss_G_Spk"
	include "z_eff_ss_d_fire.o"
	include "z_eff_ss_d_fire.rel"
endseg

beginseg
	name "ovl_Effect_Ss_Bubble"
	flags OBJECT
	after "ovl_Effect_Ss_D_Fire"
	include "z_eff_ss_bubble.o"
	include "z_eff_ss_bubble.rel"
endseg

beginseg
	name "ovl_Effect_Ss_G_Ripple"
	flags OBJECT
	after "ovl_Effect_Ss_Bubble"
	include "z_eff_ss_g_ripple.o"
	include "z_eff_ss_g_ripple.rel"
endseg

beginseg
	name "ovl_Effect_Ss_G_Splash"
	flags OBJECT
	after "ovl_Effect_Ss_G_Ripple"
	include "z_eff_ss_g_splash.o"
	include "z_eff_ss_g_splash.rel"
endseg

beginseg
	name "ovl_Effect_Ss_G_Fire"
	flags OBJECT
	after "ovl_Effect_Ss_G_Splash"
	include "z_eff_ss_g_fire.o"
	include "z_eff_ss_g_fire.rel"
endseg

beginseg
	name "ovl_Effect_Ss_Lightning"
	flags OBJECT
	after "ovl_Effect_Ss_G_Fire"
	include "z_eff_ss_lightning.o"
	include "z_eff_ss_lightning.rel"
endseg

beginseg
	name "ovl_Effect_Ss_Dt_Bubble"
	flags OBJECT
	after "ovl_Effect_Ss_Lightning"
	include "z_eff_ss_dt_bubble.o"
	include "z_eff_ss_dt_bubble.rel"
endseg

beginseg
	name "ovl_Effect_Ss_Hahen"
	flags OBJECT
	after "ovl_Effect_Ss_Dt_Bubble"
	include "z_eff_hahen.o"
	include "z_eff_hahen.rel"
endseg

beginseg
	name "ovl_Effect_Ss_Stick"
	flags OBJECT
	after "ovl_Effect_Ss_Hahen"
	include "z_eff_ss_stick.o"
	include "z_eff_ss_stick.rel"
endseg

beginseg
	name "ovl_Effect_Ss_Sibuki"
	flags OBJECT
	after "ovl_Effect_Ss_Stick"
	include "z_eff_ss_sibuki.o"
	include "z_eff_ss_sibuki.rel"
endseg

beginseg
	name "ovl_Effect_Ss_Stone1"
	flags OBJECT
	after "ovl_Effect_Ss_Sibuki"
	include "z_eff_ss_stone1.o"
	include "z_eff_ss_stone1.rel"
endseg

beginseg
	name "ovl_Effect_Ss_HitMark"
	flags OBJECT
	after "ovl_Effect_Ss_Stone1"
	include "z_eff_ss_hitmark.o"
	include "z_eff_ss_hitmark.rel"
endseg

beginseg
	name "ovl_Effect_Ss_Fhg_Flash"
	flags OBJECT
	after "ovl_Effect_Ss_HitMark"
	include "z_eff_fhg_flash.o"
	include "z_eff_fhg_flash.rel"
endseg

beginseg
	name "ovl_Effect_Ss_K_Fire"
	flags OBJECT
	after "ovl_Effect_Ss_Fhg_Flash"
	include "z_eff_k_fire.o"
	include "z_eff_k_fire.rel"
endseg

beginseg
	name "ovl_Effect_Ss_Solder_Srch_Ball"
	flags OBJECT
	after "ovl_Effect_Ss_K_Fire"
	include "z_eff_ss_solder_srch_ball.o"
	include "z_eff_ss_solder_srch_ball.rel"
endseg

beginseg
	name "ovl_Effect_Ss_Kakera"
	flags OBJECT
	after "ovl_Effect_Ss_Solder_Srch_Ball"
	include "z_eff_kakera.o"
	include "z_eff_kakera.rel"
endseg

beginseg
	name "ovl_Effect_Ss_Ice_Piece"
	flags OBJECT
	after "ovl_Effect_Ss_Kakera"
	include "z_eff_ice_piece.o"
	include "z_eff_ice_piece.rel"
endseg

beginseg
	name "ovl_Effect_Ss_En_Ice"
	flags OBJECT
	after "ovl_Effect_Ss_Ice_Piece"
	include "z_eff_en_ice.o"
	include "z_eff_en_ice.rel"
endseg

beginseg
	name "ovl_Effect_Ss_Fire_Tail"
	flags OBJECT
	after "ovl_Effect_Ss_En_Ice"
	include "z_eff_fire_tail.o"
	include "z_eff_fire_tail.rel"
endseg

beginseg
	name "ovl_Effect_Ss_En_Fire"
	flags OBJECT
	after "ovl_Effect_Ss_Fire_Tail"
	include "z_eff_en_fire.o"
	include "z_eff_en_fire.rel"
endseg

beginseg
	name "ovl_Effect_Ss_Extra"
	flags OBJECT
	after "ovl_Effect_Ss_En_Fire"
	include "z_eff_ss_extra.o"
	include "z_eff_ss_extra.rel"
endseg

beginseg
	name "ovl_Effect_Ss_Dead_Db"
	flags OBJECT
	after "ovl_Effect_Ss_Extra"
	include "z_eff_ss_dead_db.o"
	include "z_eff_ss_dead_db.rel"
endseg

beginseg
	name "ovl_Effect_Ss_Dead_Dd"
	flags OBJECT
	after "ovl_Effect_Ss_Dead_Db"
	include "z_eff_ss_dead_dd.o"
	include "z_eff_ss_dead_dd.rel"
endseg

beginseg
	name "ovl_Effect_Ss_Dead_Ds"
	flags OBJECT
	after "ovl_Effect_Ss_Dead_Dd"
	include "z_eff_ss_dead_ds.o"
	include "z_eff_ss_dead_ds.rel"
endseg

beginseg
	name "ovl_Oceff_Storm"
	flags OBJECT
	after "ovl_Effect_Ss_Dead_Ds"
	include "z_oceff_storm.o"
	include "z_oceff_storm.rel"
endseg

beginseg
	name "ovl_Obj_Demo"
	flags OBJECT
	after "ovl_Oceff_Storm"
	include "z_obj_demo.o"
	include "z_obj_demo.rel"
endseg

beginseg
	name "ovl_En_Minislime"
	flags OBJECT
	after "ovl_Obj_Demo"
	include "z_en_minislime.o"
	include "z_en_minislime.rel"
endseg

beginseg
	name "ovl_En_Nutsball"
	flags OBJECT
	after "ovl_En_Minislime"
	include "z_en_nutsball.o"
	include "z_en_nutsball.rel"
endseg

beginseg
	name "ovl_Oceff_Wipe2"
	flags OBJECT
	after "ovl_En_Nutsball"
	include "z_oceff_wipe2.o"
	include "z_oceff_wipe2.rel"
endseg

beginseg
	name "ovl_Oceff_Wipe3"
	flags OBJECT
	after "ovl_Oceff_Wipe2"
	include "z_oceff_wipe3.o"
	include "z_oceff_wipe3.rel"
endseg

beginseg
	name "ovl_En_Dg"
	flags OBJECT
	after "ovl_Oceff_Wipe3"
	include "z_en_dg.o"
	include "z_en_dg.rel"
endseg

beginseg
	name "ovl_En_Si"
	flags OBJECT
	after "ovl_En_Dg"
	include "z_en_si.o"
	include "z_en_si.rel"
endseg

beginseg
	name "ovl_Obj_Comb"
	flags OBJECT
	after "ovl_En_Si"
	include "z_obj_comb.o"
	include "z_obj_comb.rel"
endseg

beginseg
	name "ovl_Obj_Kibako2"
	flags OBJECT
	after "ovl_Obj_Comb"
	include "z_obj_kibako2.o"
	include "z_obj_kibako2.rel"
endseg

beginseg
	name "ovl_En_Hs2"
	flags OBJECT
	after "ovl_Obj_Kibako2"
	include "z_en_hs2.o"
	include "z_en_hs2.rel"
endseg

beginseg
	name "ovl_Obj_Mure3"
	flags OBJECT
	after "ovl_En_Hs2"
	include "z_obj_mure3.o"
	include "z_obj_mure3.rel"
endseg

beginseg
	name "ovl_En_Tg"
	flags OBJECT
	after "ovl_Obj_Mure3"
	include "z_en_tg.o"
	include "z_en_tg.rel"
endseg

beginseg
	name "ovl_En_Wf"
	flags OBJECT
	after "ovl_En_Tg"
	include "z_en_wf.o"
	include "z_en_wf.rel"
endseg

beginseg
	name "ovl_En_Skb"
	flags OBJECT
	after "ovl_En_Wf"
	include "z_en_skb.o"
	include "z_en_skb.rel"
endseg

beginseg
	name "ovl_En_Gs"
	flags OBJECT
	after "ovl_En_Skb"
	include "z_en_gs.o"
	include "z_en_gs.rel"
endseg

beginseg
	name "ovl_Obj_Sound"
	flags OBJECT
	after "ovl_En_Gs"
	include "z_obj_sound.o"
	include "z_obj_sound.rel"
endseg

beginseg
	name "ovl_En_Crow"
	flags OBJECT
	after "ovl_Obj_Sound"
	include "z_en_crow.o"
	include "z_en_crow.rel"
endseg

beginseg
	name "ovl_En_Cow"
	flags OBJECT
	after "ovl_En_Crow"
	include "z_en_cow.o"
	include "z_en_cow.rel"
endseg

beginseg
	name "ovl_Oceff_Wipe4"
	flags OBJECT
	after "ovl_En_Cow"
	include "z_oceff_wipe4.o"
	include "z_oceff_wipe4.rel"
endseg

beginseg
	name "ovl_En_Zo"
	flags OBJECT
	after "ovl_Oceff_Wipe4"
	include "z_en_zo.o"
	include "z_en_zo.rel"
endseg

beginseg
	name "ovl_Effect_Ss_Ice_Smoke"
	flags OBJECT
	after "ovl_En_Zo"
	include "z_eff_ss_ice_smoke.o"
	include "z_eff_ss_ice_smoke.rel"
endseg

beginseg
	name "ovl_Obj_Makekinsuta"
	flags OBJECT
	after "ovl_Effect_Ss_Ice_Smoke"
	include "z_obj_makekinsuta.o"
	include "z_obj_makekinsuta.rel"
endseg

beginseg
	name "ovl_En_Ge3"
	flags OBJECT
	after "ovl_Obj_Makekinsuta"
	include "z_en_ge3.o"
	include "z_en_ge3.rel"
endseg

beginseg
	name "ovl_Obj_Hamishi"
	flags OBJECT
	after "ovl_En_Ge3"
	include "z_obj_hamishi.o"
	include "z_obj_hamishi.rel"
endseg

beginseg
	name "ovl_En_Zl4"
	flags OBJECT
	after "ovl_Obj_Hamishi"
	include "z_en_zl4.o"
	include "z_en_zl4.rel"
endseg

beginseg
	name "ovl_En_Mm2"
	flags OBJECT
	after "ovl_En_Zl4"
	include "z_en_mm2.o"
	include "z_en_mm2.rel"
endseg

beginseg
	name "ovl_Door_Spiral"
	flags OBJECT
	after "ovl_En_Mm2"
	include "z_door_spiral.o"
	include "z_door_spiral.rel"
endseg

beginseg
	name "ovl_Obj_Pzlblock"
	flags OBJECT
	after "ovl_Door_Spiral"
	include "z_obj_pzlblock.o"
	include "z_obj_pzlblock.rel"
endseg

beginseg
	name "ovl_Obj_Toge"
	flags OBJECT
	after "ovl_Obj_Pzlblock"
	include "z_obj_toge.o"
	include "z_obj_toge.rel"
endseg

beginseg
	name "ovl_Obj_Armos"
	flags OBJECT
	after "ovl_Obj_Toge"
	include "z_obj_armos.o"
	include "z_obj_armos.rel"
endseg

beginseg
	name "ovl_Obj_Boyo"
	flags OBJECT
	after "ovl_Obj_Armos"
	include "z_obj_boyo.o"
	include "z_obj_boyo.rel"
endseg

beginseg
	name "ovl_En_Grasshopper"
	flags OBJECT
	after "ovl_Obj_Boyo"
	include "z_en_grasshopper.o"
	include "z_en_grasshopper.rel"
endseg

beginseg
	name "ovl_Obj_Grass"
	flags OBJECT
	after "ovl_En_Grasshopper"
	include "z_obj_grass.o"
	include "z_obj_grass.rel"
endseg

beginseg
	name "ovl_Obj_Grass_Carry"
	flags OBJECT
	after "ovl_Obj_Grass"
	include "z_obj_grass_carry.o"
	include "z_obj_grass_carry.rel"
endseg

beginseg
	name "ovl_Obj_Grass_Unit"
	flags OBJECT
	after "ovl_Obj_Grass_Carry"
	include "z_obj_grass_unit.o"
	include "z_obj_grass_unit.rel"
endseg

beginseg
	name "ovl_Bg_Fire_Wall"
	flags OBJECT
	after "ovl_Obj_Grass_Unit"
	include "z_bg_fire_wall.o"
	include "z_bg_fire_wall.rel"
endseg

beginseg
	name "ovl_En_Bu"
	flags OBJECT
	after "ovl_Bg_Fire_Wall"
	include "z_en_bu.o"
	include "z_en_bu.rel"
endseg

beginseg
	name "ovl_En_Encount3"
	flags OBJECT
	after "ovl_En_Bu"
	include "z_en_encount3.o"
	include "z_en_encount3.rel"
endseg

beginseg
	name "ovl_En_Jso"
	flags OBJECT
	after "ovl_En_Encount3"
	include "z_en_jso.o"
	include "z_en_jso.rel"
endseg

beginseg
	name "ovl_Obj_Chikuwa"
	flags OBJECT
	after "ovl_En_Jso"
	include "z_obj_chikuwa.o"
	include "z_obj_chikuwa.rel"
endseg

beginseg
	name "ovl_En_Knight"
	flags OBJECT
	after "ovl_Obj_Chikuwa"
	include "z_en_knight.o"
	include "z_en_knight.rel"
endseg

beginseg
	name "ovl_En_Warp_tag"
	flags OBJECT
	after "ovl_En_Knight"
	include "z_en_warp_tag.o"
	include "z_en_warp_tag.rel"
endseg

beginseg
	name "ovl_En_Aob_01"
	flags OBJECT
	after "ovl_En_Warp_tag"
	include "z_en_aob_01.o"
	include "z_en_aob_01.rel"
endseg

beginseg
	name "ovl_En_Boj_01"
	flags OBJECT
	after "ovl_En_Aob_01"
	include "z_en_boj_01.o"
	include "z_en_boj_01.rel"
endseg

beginseg
	name "ovl_En_Boj_02"
	flags OBJECT
	after "ovl_En_Boj_01"
	include "z_en_boj_02.o"
	include "z_en_boj_02.rel"
endseg

beginseg
	name "ovl_En_Boj_03"
	flags OBJECT
	after "ovl_En_Boj_02"
	include "z_en_boj_03.o"
	include "z_en_boj_03.rel"
endseg

beginseg
	name "ovl_En_Encount4"
	flags OBJECT
	after "ovl_En_Boj_03"
	include "z_en_encount4.o"
	include "z_en_encount4.rel"
endseg

beginseg
	name "ovl_En_Bom_Bowl_Man"
	flags OBJECT
	after "ovl_En_Encount4"
	include "z_en_bom_bowl_man.o"
	include "z_en_bom_bowl_man.rel"
endseg

beginseg
	name "ovl_En_Syateki_Man"
	flags OBJECT
	after "ovl_En_Bom_Bowl_Man"
	include "z_en_syateki_man.o"
	include "z_en_syateki_man.rel"
endseg

beginseg
	name "ovl_Bg_Icicle"
	flags OBJECT
	after "ovl_En_Syateki_Man"
	include "z_bg_icicle.o"
	include "z_bg_icicle.rel"
endseg

beginseg
	name "ovl_En_Syateki_Crow"
	flags OBJECT
	after "ovl_Bg_Icicle"
	include "z_en_syateki_crow.o"
	include "z_en_syateki_crow.rel"
endseg

beginseg
	name "ovl_En_Boj_04"
	flags OBJECT
	after "ovl_En_Syateki_Crow"
	include "z_en_boj_04.o"
	include "z_en_boj_04.rel"
endseg

beginseg
	name "ovl_En_Cne_01"
	flags OBJECT
	after "ovl_En_Boj_04"
	include "z_en_cne_01.o"
	include "z_en_cne_01.rel"
endseg

beginseg
	name "ovl_En_Bba_01"
	flags OBJECT
	after "ovl_En_Cne_01"
	include "z_en_bba_01.o"
	include "z_en_bba_01.rel"
endseg

beginseg
	name "ovl_En_Bji_01"
	flags OBJECT
	after "ovl_En_Bba_01"
	include "z_en_bji_01.o"
	include "z_en_bji_01.rel"
endseg

beginseg
	name "ovl_Bg_Spdweb"
	flags OBJECT
	after "ovl_En_Bji_01"
	include "z_bg_spdweb.o"
	include "z_bg_spdweb.rel"
endseg

beginseg
	name "ovl_En_Mt_tag"
	flags OBJECT
	after "ovl_Bg_Spdweb"
	include "z_en_mt_tag.o"
	include "z_en_mt_tag.rel"
endseg

beginseg
	name "ovl_Boss_01"
	flags OBJECT
	after "ovl_En_Mt_tag"
	include "z_boss_01.o"
	include "z_boss_01.rel"
endseg

beginseg
	name "ovl_Boss_02"
	flags OBJECT
	after "ovl_Boss_01"
	include "z_boss_02.o"
	include "z_boss_02.rel"
endseg

beginseg
	name "ovl_Boss_03"
	flags OBJECT
	after "ovl_Boss_02"
	include "z_boss_03.o"
	include "z_boss_03.rel"
endseg

beginseg
	name "ovl_Boss_04"
	flags OBJECT
	after "ovl_Boss_03"
	include "z_boss_04.o"
	include "z_boss_04.rel"
endseg

beginseg
	name "ovl_Boss_05"
	flags OBJECT
	after "ovl_Boss_04"
	include "z_boss_05.o"
	include "z_boss_05.rel"
endseg

beginseg
	name "ovl_Boss_06"
	flags OBJECT
	after "ovl_Boss_05"
	include "z_boss_06.o"
	include "z_boss_06.rel"
endseg

beginseg
	name "ovl_Boss_07"
	flags OBJECT
	after "ovl_Boss_06"
	include "z_boss_07.o"
	include "z_boss_07.rel"
endseg

beginseg
	name "ovl_Bg_Dy_Yoseizo"
	flags OBJECT
	after "ovl_Boss_07"
	include "z_bg_dy_yoseizo.o"
	include "z_bg_dy_yoseizo.rel"
endseg

beginseg
	name "ovl_En_Boj_05"
	flags OBJECT
	after "ovl_Bg_Dy_Yoseizo"
	include "z_en_boj_05.o"
	include "z_en_boj_05.rel"
endseg

beginseg
	name "ovl_En_Sob1"
	flags OBJECT
	after "ovl_En_Boj_05"
	include "z_en_soB1.o"
	include "z_en_soB1.rel"
endseg

beginseg
	name "ovl_En_Go"
	flags OBJECT
	after "ovl_En_Sob1"
	include "z_en_go.o"
	include "z_en_go.rel"
endseg

beginseg
	name "ovl_En_Raf"
	flags OBJECT
	after "ovl_En_Go"
	include "z_en_raf.o"
	include "z_en_raf.rel"
endseg

beginseg
	name "ovl_Obj_Funen"
	flags OBJECT
	after "ovl_En_Raf"
	include "z_obj_funen.o"
	include "z_obj_funen.rel"
endseg

beginseg
	name "ovl_Obj_Raillift"
	flags OBJECT
	after "ovl_Obj_Funen"
	include "z_obj_raillift.o"
	include "z_obj_raillift.rel"
endseg

beginseg
	name "ovl_Bg_Numa_Hana"
	flags OBJECT
	after "ovl_Obj_Raillift"
	include "z_bg_numa_hana.o"
	include "z_bg_numa_hana.rel"
endseg

beginseg
	name "ovl_Obj_Flowerpot"
	flags OBJECT
	after "ovl_Bg_Numa_Hana"
	include "z_obj_flowerpot.o"
	include "z_obj_flowerpot.rel"
endseg

beginseg
	name "ovl_Obj_Spinyroll"
	flags OBJECT
	after "ovl_Obj_Flowerpot"
	include "z_obj_spinyroll.o"
	include "z_obj_spinyroll.rel"
endseg

beginseg
	name "ovl_Dm_Hina"
	flags OBJECT
	after "ovl_Obj_Spinyroll"
	include "z_dm_hina.o"
	include "z_dm_hina.rel"
endseg

beginseg
	name "ovl_En_Syateki_Wf"
	flags OBJECT
	after "ovl_Dm_Hina"
	include "z_en_syateki_wf.o"
	include "z_en_syateki_wf.rel"
endseg

beginseg
	name "ovl_Obj_Skateblock"
	flags OBJECT
	after "ovl_En_Syateki_Wf"
	include "z_obj_skateblock.o"
	include "z_obj_skateblock.rel"
endseg

beginseg
	name "ovl_Effect_En_Ice_Block"
	flags OBJECT
	after "ovl_Obj_Skateblock"
	include "z_eff_en_ice_block.o"
	include "z_eff_en_ice_block.rel"
endseg

beginseg
	name "ovl_Obj_Iceblock"
	flags OBJECT
	after "ovl_Effect_En_Ice_Block"
	include "z_obj_iceblock.o"
	include "z_obj_iceblock.rel"
endseg

beginseg
	name "ovl_En_Bigpamet"
	flags OBJECT
	after "ovl_Obj_Iceblock"
	include "z_en_bigpamet.o"
	include "z_en_bigpamet.rel"
endseg

beginseg
	name "ovl_Bg_Dblue_Movebg"
	flags OBJECT
	after "ovl_En_Bigpamet"
	include "z_bg_dblue_movebg.o"
	include "z_bg_dblue_movebg.rel"
endseg

beginseg
	name "ovl_En_Syateki_Dekunuts"
	flags OBJECT
	after "ovl_Bg_Dblue_Movebg"
	include "z_en_syateki_dekunuts.o"
	include "z_en_syateki_dekunuts.rel"
endseg

beginseg
	name "ovl_Elf_Msg3"
	flags OBJECT
	after "ovl_En_Syateki_Dekunuts"
	include "z_elf_msg3.o"
	include "z_elf_msg3.rel"
endseg

beginseg
	name "ovl_En_Fg"
	flags OBJECT
	after "ovl_Elf_Msg3"
	include "z_en_fg.o"
	include "z_en_fg.rel"
endseg

beginseg
	name "ovl_Dm_Ravine"
	flags OBJECT
	after "ovl_En_Fg"
	include "z_dm_ravine.o"
	include "z_dm_ravine.rel"
endseg

beginseg
	name "ovl_Dm_Sa"
	flags OBJECT
	after "ovl_Dm_Ravine"
	include "z_dm_sa.o"
	include "z_dm_sa.rel"
endseg

beginseg
	name "ovl_En_Slime"
	flags OBJECT
	after "ovl_Dm_Sa"
	include "z_en_slime.o"
	include "z_en_slime.rel"
endseg

beginseg
	name "ovl_En_Pr"
	flags OBJECT
	after "ovl_En_Slime"
	include "z_en_pr.o"
	include "z_en_pr.rel"
endseg

beginseg
	name "ovl_Obj_Toudai"
	flags OBJECT
	after "ovl_En_Pr"
	include "z_obj_toudai.o"
	include "z_obj_toudai.rel"
endseg

beginseg
	name "ovl_Obj_Entotu"
	flags OBJECT
	after "ovl_Obj_Toudai"
	include "z_obj_entotu.o"
	include "z_obj_entotu.rel"
endseg

beginseg
	name "ovl_Obj_Bell"
	flags OBJECT
	after "ovl_Obj_Entotu"
	include "z_obj_bell.o"
	include "z_obj_bell.rel"
endseg

beginseg
	name "ovl_En_Syateki_Okuta"
	flags OBJECT
	after "ovl_Obj_Bell"
	include "z_en_syateki_okuta.o"
	include "z_en_syateki_okuta.rel"
endseg

beginseg
	name "ovl_Obj_Shutter"
	flags OBJECT
	after "ovl_En_Syateki_Okuta"
	include "z_obj_shutter.o"
	include "z_obj_shutter.rel"
endseg

beginseg
	name "ovl_Dm_Zl"
	flags OBJECT
	after "ovl_Obj_Shutter"
	include "z_dm_zl.o"
	include "z_dm_zl.rel"
endseg

beginseg
	name "ovl_En_Ru"
	flags OBJECT
	after "ovl_Dm_Zl"
	include "z_en_ru.o"
	include "z_en_ru.rel"
endseg

beginseg
	name "ovl_En_Elfgrp"
	flags OBJECT
	after "ovl_En_Ru"
	include "z_en_elfgrp.o"
	include "z_en_elfgrp.rel"
endseg

beginseg
	name "ovl_Dm_Tsg"
	flags OBJECT
	after "ovl_En_Elfgrp"
	include "z_dm_tsg.o"
	include "z_dm_tsg.rel"
endseg

beginseg
	name "ovl_En_Baguo"
	flags OBJECT
	after "ovl_Dm_Tsg"
	include "z_en_baguo.o"
	include "z_en_baguo.rel"
endseg

beginseg
	name "ovl_Obj_Vspinyroll"
	flags OBJECT
	after "ovl_En_Baguo"
	include "z_obj_vspinyroll.o"
	include "z_obj_vspinyroll.rel"
endseg

beginseg
	name "ovl_Obj_Smork"
	flags OBJECT
	after "ovl_Obj_Vspinyroll"
	include "z_obj_smork.o"
	include "z_obj_smork.rel"
endseg

beginseg
	name "ovl_En_Test2"
	flags OBJECT
	after "ovl_Obj_Smork"
	include "z_en_test2.o"
	include "z_en_test2.rel"
endseg

beginseg
	name "ovl_En_Test3"
	flags OBJECT
	after "ovl_En_Test2"
	include "z_en_test3.o"
	include "z_en_test3.rel"
endseg

beginseg
	name "ovl_En_Test4"
	flags OBJECT
	after "ovl_En_Test3"
	include "z_en_test4.o"
	include "z_en_test4.rel"
endseg

beginseg
	name "ovl_En_Bat"
	flags OBJECT
	after "ovl_En_Test4"
	include "z_en_bat.o"
	include "z_en_bat.rel"
endseg

beginseg
	name "ovl_En_Sekihi"
	flags OBJECT
	after "ovl_En_Bat"
	include "z_en_sekihi.o"
	include "z_en_sekihi.rel"
endseg

beginseg
	name "ovl_En_Wiz"
	flags OBJECT
	after "ovl_En_Sekihi"
	include "z_en_wiz.o"
	include "z_en_wiz.rel"
endseg

beginseg
	name "ovl_En_Wiz_Brock"
	flags OBJECT
	after "ovl_En_Wiz"
	include "z_en_wiz_brock.o"
	include "z_en_wiz_brock.rel"
endseg

beginseg
	name "ovl_En_Wiz_Fire"
	flags OBJECT
	after "ovl_En_Wiz_Brock"
	include "z_en_wiz_fire.o"
	include "z_en_wiz_fire.rel"
endseg

beginseg
	name "ovl_Eff_Change"
	flags OBJECT
	after "ovl_En_Wiz_Fire"
	include "z_eff_change.o"
	include "z_eff_change.rel"
endseg

beginseg
	name "ovl_Dm_Statue"
	flags OBJECT
	after "ovl_Eff_Change"
	include "z_dm_statue.o"
	include "z_dm_statue.rel"
endseg

beginseg
	name "ovl_Obj_Fireshield"
	flags OBJECT
	after "ovl_Dm_Statue"
	include "z_obj_fireshield.o"
	include "z_obj_fireshield.rel"
endseg

beginseg
	name "ovl_Bg_Ladder"
	flags OBJECT
	after "ovl_Obj_Fireshield"
	include "z_bg_ladder.o"
	include "z_bg_ladder.rel"
endseg

beginseg
	name "ovl_En_Mkk"
	flags OBJECT
	after "ovl_Bg_Ladder"
	include "z_en_mkk.o"
	include "z_en_mkk.rel"
endseg

beginseg
	name "ovl_Demo_Getitem"
	flags OBJECT
	after "ovl_En_Mkk"
	include "z_demo_getitem.o"
	include "z_demo_getitem.rel"
endseg

beginseg
	name "ovl_En_Dnb"
	flags OBJECT
	after "ovl_Demo_Getitem"
	include "z_en_dnb.o"
	include "z_en_dnb.rel"
endseg

beginseg
	name "ovl_En_Dnh"
	flags OBJECT
	after "ovl_En_Dnb"
	include "z_en_dnh.o"
	include "z_en_dnh.rel"
endseg

beginseg
	name "ovl_En_Dnk"
	flags OBJECT
	after "ovl_En_Dnh"
	include "z_en_dnk.o"
	include "z_en_dnk.rel"
endseg

beginseg
	name "ovl_En_Dnq"
	flags OBJECT
	after "ovl_En_Dnk"
	include "z_en_dnq.o"
	include "z_en_dnq.rel"
endseg

beginseg
	name "ovl_Bg_Keikoku_Saku"
	flags OBJECT
	after "ovl_En_Dnq"
	include "z_bg_keikoku_saku.o"
	include "z_bg_keikoku_saku.rel"
endseg

beginseg
	name "ovl_Obj_Hugebombiwa"
	flags OBJECT
	after "ovl_Bg_Keikoku_Saku"
	include "z_obj_hugebombiwa.o"
	include "z_obj_hugebombiwa.rel"
endseg

beginseg
	name "ovl_En_Firefly2"
	flags OBJECT
	after "ovl_Obj_Hugebombiwa"
	include "z_en_firefly2.o"
	include "z_en_firefly2.rel"
endseg

beginseg
	name "ovl_En_Rat"
	flags OBJECT
	after "ovl_En_Firefly2"
	include "z_en_rat.o"
	include "z_en_rat.rel"
endseg

beginseg
	name "ovl_En_Water_Effect"
	flags OBJECT
	after "ovl_En_Rat"
	include "z_en_water_effect.o"
	include "z_en_water_effect.rel"
endseg

beginseg
	name "ovl_En_Kusa2"
	flags OBJECT
	after "ovl_En_Water_Effect"
	include "z_en_kusa2.o"
	include "z_en_kusa2.rel"
endseg

beginseg
	name "ovl_Bg_Spout_Fire"
	flags OBJECT
	after "ovl_En_Kusa2"
	include "z_bg_spout_fire.o"
	include "z_bg_spout_fire.rel"
endseg

beginseg
	name "ovl_En_Dy_Extra"
	flags OBJECT
	after "ovl_Bg_Spout_Fire"
	include "z_en_dy_extra.o"
	include "z_en_dy_extra.rel"
endseg

beginseg
	name "ovl_En_Bal"
	flags OBJECT
	after "ovl_En_Dy_Extra"
	include "z_en_bal.o"
	include "z_en_bal.rel"
endseg

beginseg
	name "ovl_En_Ginko_Man"
	flags OBJECT
	after "ovl_En_Bal"
	include "z_en_ginko_man.o"
	include "z_en_ginko_man.rel"
endseg

beginseg
	name "ovl_En_Warp_Uzu"
	flags OBJECT
	after "ovl_En_Ginko_Man"
	include "z_en_warp_uzu.o"
	include "z_en_warp_uzu.rel"
endseg

beginseg
	name "ovl_Obj_Driftice"
	flags OBJECT
	after "ovl_En_Warp_Uzu"
	include "z_obj_driftice.o"
	include "z_obj_driftice.rel"
endseg

beginseg
	name "ovl_En_Look_Nuts"
	flags OBJECT
	after "ovl_Obj_Driftice"
	include "z_en_look_nuts.o"
	include "z_en_look_nuts.rel"
endseg

beginseg
	name "ovl_En_Mushi2"
	flags OBJECT
	after "ovl_En_Look_Nuts"
	include "z_en_mushi2.o"
	include "z_en_mushi2.rel"
endseg

beginseg
	name "ovl_En_Fall"
	flags OBJECT
	after "ovl_En_Mushi2"
	include "z_en_fall.o"
	include "z_en_fall.rel"
endseg

beginseg
	name "ovl_En_Mm3"
	flags OBJECT
	after "ovl_En_Fall"
	include "z_en_mm3.o"
	include "z_en_mm3.rel"
endseg

beginseg
	name "ovl_Bg_Crace_Movebg"
	flags OBJECT
	after "ovl_En_Mm3"
	include "z_bg_crace_movebg.o"
	include "z_bg_crace_movebg.rel"
endseg

beginseg
	name "ovl_En_Dno"
	flags OBJECT
	after "ovl_Bg_Crace_Movebg"
	include "z_en_dno.o"
	include "z_en_dno.rel"
endseg

beginseg
	name "ovl_En_Pr2"
	flags OBJECT
	after "ovl_En_Dno"
	include "z_en_pr2.o"
	include "z_en_pr2.rel"
endseg

beginseg
	name "ovl_En_Prz"
	flags OBJECT
	after "ovl_En_Pr2"
	include "z_en_prz.o"
	include "z_en_prz.rel"
endseg

beginseg
	name "ovl_En_Jso2"
	flags OBJECT
	after "ovl_En_Prz"
	include "z_en_jso2.o"
	include "z_en_jso2.rel"
endseg

beginseg
	name "ovl_Obj_Etcetera"
	flags OBJECT
	after "ovl_En_Jso2"
	include "z_obj_etcetera.o"
	include "z_obj_etcetera.rel"
endseg

beginseg
	name "ovl_En_Egol"
	flags OBJECT
	after "ovl_Obj_Etcetera"
	include "z_en_egol.o"
	include "z_en_egol.rel"
endseg

beginseg
	name "ovl_Obj_Mine"
	flags OBJECT
	after "ovl_En_Egol"
	include "z_obj_mine.o"
	include "z_obj_mine.rel"
endseg

beginseg
	name "ovl_Obj_Purify"
	flags OBJECT
	after "ovl_Obj_Mine"
	include "z_obj_purify.o"
	include "z_obj_purify.rel"
endseg

beginseg
	name "ovl_En_Tru"
	flags OBJECT
	after "ovl_Obj_Purify"
	include "z_en_tru.o"
	include "z_en_tru.rel"
endseg

beginseg
	name "ovl_En_Trt"
	flags OBJECT
	after "ovl_En_Tru"
	include "z_en_trt.o"
	include "z_en_trt.rel"
endseg

beginseg
	name "ovl_En_Test5"
	flags OBJECT
	after "ovl_En_Trt"
	include "z_en_test5.o"
	include "z_en_test5.rel"
endseg

beginseg
	name "ovl_En_Test6"
	flags OBJECT
	after "ovl_En_Test5"
	include "z_en_test6.o"
	include "z_en_test6.rel"
endseg

beginseg
	name "ovl_En_Az"
	flags OBJECT
	after "ovl_En_Test6"
	include "z_en_az.o"
	include "z_en_az.rel"
endseg

beginseg
	name "ovl_En_Estone"
	flags OBJECT
	after "ovl_En_Az"
	include "z_en_estone.o"
	include "z_en_estone.rel"
endseg

beginseg
	name "ovl_Bg_Hakugin_Post"
	flags OBJECT
	after "ovl_En_Estone"
	include "z_bg_hakugin_post.o"
	include "z_bg_hakugin_post.rel"
endseg

beginseg
	name "ovl_Dm_Opstage"
	flags OBJECT
	after "ovl_Bg_Hakugin_Post"
	include "z_dm_opstage.o"
	include "z_dm_opstage.rel"
endseg

beginseg
	name "ovl_Dm_Stk"
	flags OBJECT
	after "ovl_Dm_Opstage"
	include "z_dm_stk.o"
	include "z_dm_stk.rel"
endseg

beginseg
	name "ovl_Dm_Char00"
	flags OBJECT
	after "ovl_Dm_Stk"
	include "z_dm_char00.o"
	include "z_dm_char00.rel"
endseg

beginseg
	name "ovl_Dm_Char01"
	flags OBJECT
	after "ovl_Dm_Char00"
	include "z_dm_char01.o"
	include "z_dm_char01.rel"
endseg

beginseg
	name "ovl_Dm_Char02"
	flags OBJECT
	after "ovl_Dm_Char01"
	include "z_dm_char02.o"
	include "z_dm_char02.rel"
endseg

beginseg
	name "ovl_Dm_Char03"
	flags OBJECT
	after "ovl_Dm_Char02"
	include "z_dm_char03.o"
	include "z_dm_char03.rel"
endseg

beginseg
	name "ovl_Dm_Char04"
	flags OBJECT
	after "ovl_Dm_Char03"
	include "z_dm_char04.o"
	include "z_dm_char04.rel"
endseg

beginseg
	name "ovl_Dm_Char05"
	flags OBJECT
	after "ovl_Dm_Char04"
	include "z_dm_char05.o"
	include "z_dm_char05.rel"
endseg

beginseg
	name "ovl_Dm_Char06"
	flags OBJECT
	after "ovl_Dm_Char05"
	include "z_dm_char06.o"
	include "z_dm_char06.rel"
endseg

beginseg
	name "ovl_Dm_Char07"
	flags OBJECT
	after "ovl_Dm_Char06"
	include "z_dm_char07.o"
	include "z_dm_char07.rel"
endseg

beginseg
	name "ovl_Dm_Char08"
	flags OBJECT
	after "ovl_Dm_Char07"
	include "z_dm_char08.o"
	include "z_dm_char08.rel"
endseg

beginseg
	name "ovl_Dm_Char09"
	flags OBJECT
	after "ovl_Dm_Char08"
	include "z_dm_char09.o"
	include "z_dm_char09.rel"
endseg

beginseg
	name "ovl_Obj_Tokeidai"
	flags OBJECT
	after "ovl_Dm_Char09"
	include "z_obj_tokeidai.o"
	include "z_obj_tokeidai.rel"
endseg

beginseg
	name "ovl_En_Mnk"
	flags OBJECT
	after "ovl_Obj_Tokeidai"
	include "z_en_mnk.o"
	include "z_en_mnk.rel"
endseg

beginseg
	name "ovl_En_Egblock"
	flags OBJECT
	after "ovl_En_Mnk"
	include "z_en_egblock.o"
	include "z_en_egblock.rel"
endseg

beginseg
	name "ovl_En_Guard_Nuts"
	flags OBJECT
	after "ovl_En_Egblock"
	include "z_en_guard_nuts.o"
	include "z_en_guard_nuts.rel"
endseg

beginseg
	name "ovl_Bg_Hakugin_Bombwall"
	flags OBJECT
	after "ovl_En_Guard_Nuts"
	include "z_bg_hakugin_bombwall.o"
	include "z_bg_hakugin_bombwall.rel"
endseg

beginseg
	name "ovl_Obj_Tokei_Tobira"
	flags OBJECT
	after "ovl_Bg_Hakugin_Bombwall"
	include "z_obj_tokei_tobira.o"
	include "z_obj_tokei_tobira.rel"
endseg

beginseg
	name "ovl_Bg_Hakugin_Elvpole"
	flags OBJECT
	after "ovl_Obj_Tokei_Tobira"
	include "z_bg_hakugin_elvpole.o"
	include "z_bg_hakugin_elvpole.rel"
endseg

beginseg
	name "ovl_En_Ma4"
	flags OBJECT
	after "ovl_Bg_Hakugin_Elvpole"
	include "z_en_ma4.o"
	include "z_en_ma4.rel"
endseg

beginseg
	name "ovl_En_Twig"
	flags OBJECT
	after "ovl_En_Ma4"
	include "z_en_twig.o"
	include "z_en_twig.rel"
endseg

beginseg
	name "ovl_En_Po_Fusen"
	flags OBJECT
	after "ovl_En_Twig"
	include "z_en_po_fusen.o"
	include "z_en_po_fusen.rel"
endseg

beginseg
	name "ovl_En_Door_Etc"
	flags OBJECT
	after "ovl_En_Po_Fusen"
	include "z_en_door_etc.o"
	include "z_en_door_etc.rel"
endseg

beginseg
	name "ovl_En_Bigokuta"
	flags OBJECT
	after "ovl_En_Door_Etc"
	include "z_en_bigokuta.o"
	include "z_en_bigokuta.rel"
endseg

beginseg
	name "ovl_Bg_Icefloe"
	flags OBJECT
	after "ovl_En_Bigokuta"
	include "z_bg_icefloe.o"
	include "z_bg_icefloe.rel"
endseg

beginseg
	name "ovl_fbdemo_triforce"
	flags OBJECT
	after "ovl_Bg_Icefloe"
	include "z_fbdemo_triforce.o"
	include "z_fbdemo_triforce.rel"
endseg

beginseg
	name "ovl_fbdemo_wipe1"
	flags OBJECT
	after "ovl_fbdemo_triforce"
	include "z_fbdemo_wipe1.o"
	include "z_fbdemo_wipe1.rel"
endseg

beginseg
	name "ovl_fbdemo_wipe3"
	flags OBJECT
	after "ovl_fbdemo_wipe1"
	include "z_fbdemo_wipe3.o"
	include "z_fbdemo_wipe3.rel"
endseg

beginseg
	name "ovl_fbdemo_wipe4"
	flags OBJECT
	after "ovl_fbdemo_wipe3"
	include "z_fbdemo_wipe4.o"
	include "z_fbdemo_wipe4.rel"
endseg

beginseg
	name "ovl_fbdemo_wipe5"
	flags OBJECT
	after "ovl_fbdemo_wipe4"
	include "z_fbdemo_wipe5.o"
	include "z_fbdemo_wipe5.rel"
endseg

beginseg
	name "ovl_Effect_Ss_Sbn"
	flags OBJECT
	after "ovl_fbdemo_wipe5"
	include "z_eff_ss_sbn.o"
	include "z_eff_ss_sbn.rel"
endseg

beginseg
	name "ovl_Obj_Ocarinalift"
	flags OBJECT
	after "ovl_Effect_Ss_Sbn"
	include "z_obj_ocarinalift.o"
	include "z_obj_ocarinalift.rel"
endseg

beginseg
	name "ovl_En_Time_Tag"
	flags OBJECT
	after "ovl_Obj_Ocarinalift"
	include "z_en_time_tag.o"
	include "z_en_time_tag.rel"
endseg

beginseg
	name "ovl_Bg_Open_Shutter"
	flags OBJECT
	after "ovl_En_Time_Tag"
	include "z_bg_open_shutter.o"
	include "z_bg_open_shutter.rel"
endseg

beginseg
	name "ovl_Bg_Open_Spot"
	flags OBJECT
	after "ovl_Bg_Open_Shutter"
	include "z_bg_open_spot.o"
	include "z_bg_open_spot.rel"
endseg

beginseg
	name "ovl_Bg_Fu_Kaiten"
	flags OBJECT
	after "ovl_Bg_Open_Spot"
	include "z_bg_fu_kaiten.o"
	include "z_bg_fu_kaiten.rel"
endseg

beginseg
	name "ovl_Obj_Aqua"
	flags OBJECT
	after "ovl_Bg_Fu_Kaiten"
	include "z_obj_aqua.o"
	include "z_obj_aqua.rel"
endseg

beginseg
	name "ovl_En_Elforg"
	flags OBJECT
	after "ovl_Obj_Aqua"
	include "z_en_elforg.o"
	include "z_en_elforg.rel"
endseg

beginseg
	name "ovl_En_Elfbub"
	flags OBJECT
	after "ovl_En_Elforg"
	include "z_en_elfbub.o"
	include "z_en_elfbub.rel"
endseg

beginseg
	name "ovl_En_Fu_Mato"
	flags OBJECT
	after "ovl_En_Elfbub"
	include "z_en_fu_mato.o"
	include "z_en_fu_mato.rel"
endseg

beginseg
	name "ovl_En_Fu_Kago"
	flags OBJECT
	after "ovl_En_Fu_Mato"
	include "z_en_fu_kago.o"
	include "z_en_fu_kago.rel"
endseg

beginseg
	name "ovl_En_Osn"
	flags OBJECT
	after "ovl_En_Fu_Kago"
	include "z_en_osn.o"
	include "z_en_osn.rel"
endseg

beginseg
	name "ovl_Bg_Ctower_Gear"
	flags OBJECT
	after "ovl_En_Osn"
	include "z_bg_ctower_gear.o"
	include "z_bg_ctower_gear.rel"
endseg

beginseg
	name "ovl_En_Trt2"
	flags OBJECT
	after "ovl_Bg_Ctower_Gear"
	include "z_en_trt2.o"
	include "z_en_trt2.rel"
endseg

beginseg
	name "ovl_Obj_Tokei_Step"
	flags OBJECT
	after "ovl_En_Trt2"
	include "z_obj_tokei_step.o"
	include "z_obj_tokei_step.rel"
endseg

beginseg
	name "ovl_Bg_Lotus"
	flags OBJECT
	after "ovl_Obj_Tokei_Step"
	include "z_bg_lotus.o"
	include "z_bg_lotus.rel"
endseg

beginseg
	name "ovl_En_Kame"
	flags OBJECT
	after "ovl_Bg_Lotus"
	include "z_en_kame.o"
	include "z_en_kame.rel"
endseg

beginseg
	name "ovl_Obj_Takaraya_Wall"
	flags OBJECT
	after "ovl_En_Kame"
	include "z_obj_takaraya_wall.o"
	include "z_obj_takaraya_wall.rel"
endseg

beginseg
	name "ovl_Bg_Fu_Mizu"
	flags OBJECT
	after "ovl_Obj_Takaraya_Wall"
	include "z_bg_fu_mizu.o"
	include "z_bg_fu_mizu.rel"
endseg

beginseg
	name "ovl_En_Sellnuts"
	flags OBJECT
	after "ovl_Bg_Fu_Mizu"
	include "z_en_sellnuts.o"
	include "z_en_sellnuts.rel"
endseg

beginseg
	name "ovl_Bg_Dkjail_Ivy"
	flags OBJECT
	after "ovl_En_Sellnuts"
	include "z_bg_dkjail_ivy.o"
	include "z_bg_dkjail_ivy.rel"
endseg

beginseg
	name "ovl_Obj_Visiblock"
	flags OBJECT
	after "ovl_Bg_Dkjail_Ivy"
	include "z_obj_visiblock.o"
	include "z_obj_visiblock.rel"
endseg

beginseg
	name "ovl_En_Takaraya"
	flags OBJECT
	after "ovl_Obj_Visiblock"
	include "z_en_takaraya.o"
	include "z_en_takaraya.rel"
endseg

beginseg
	name "ovl_En_Tsn"
	flags OBJECT
	after "ovl_En_Takaraya"
	include "z_en_tsn.o"
	include "z_en_tsn.rel"
endseg

beginseg
	name "ovl_En_Ds2n"
	flags OBJECT
	after "ovl_En_Tsn"
	include "z_en_ds2n.o"
	include "z_en_ds2n.rel"
endseg

beginseg
	name "ovl_En_Fsn"
	flags OBJECT
	after "ovl_En_Ds2n"
	include "z_en_fsn.o"
	include "z_en_fsn.rel"
endseg

beginseg
	name "ovl_En_Shn"
	flags OBJECT
	after "ovl_En_Fsn"
	include "z_en_shn.o"
	include "z_en_shn.rel"
endseg

beginseg
	name "ovl_En_Stop_heishi"
	flags OBJECT
	after "ovl_En_Shn"
	include "z_en_stop_heishi.o"
	include "z_en_stop_heishi.rel"
endseg

beginseg
	name "ovl_Obj_Bigicicle"
	flags OBJECT
	after "ovl_En_Stop_heishi"
	include "z_obj_bigicicle.o"
	include "z_obj_bigicicle.rel"
endseg

beginseg
	name "ovl_En_Lift_Nuts"
	flags OBJECT
	after "ovl_Obj_Bigicicle"
	include "z_en_lift_nuts.o"
	include "z_en_lift_nuts.rel"
endseg

beginseg
	name "ovl_En_Tk"
	flags OBJECT
	after "ovl_En_Lift_Nuts"
	include "z_en_tk.o"
	include "z_en_tk.rel"
endseg

beginseg
	name "ovl_Bg_Market_Step"
	flags OBJECT
	after "ovl_En_Tk"
	include "z_bg_market_step.o"
	include "z_bg_market_step.rel"
endseg

beginseg
	name "ovl_Obj_Lupygamelift"
	flags OBJECT
	after "ovl_Bg_Market_Step"
	include "z_obj_lupygamelift.o"
	include "z_obj_lupygamelift.rel"
endseg

beginseg
	name "ovl_En_Test7"
	flags OBJECT
	after "ovl_Obj_Lupygamelift"
	include "z_en_test7.o"
	include "z_en_test7.rel"
endseg

beginseg
	name "ovl_Obj_Lightblock"
	flags OBJECT
	after "ovl_En_Test7"
	include "z_obj_lightblock.o"
	include "z_obj_lightblock.rel"
endseg

beginseg
	name "ovl_Mir_Ray2"
	flags OBJECT
	after "ovl_Obj_Lightblock"
	include "z_mir_ray2.o"
	include "z_mir_ray2.rel"
endseg

beginseg
	name "ovl_En_Wdhand"
	flags OBJECT
	after "ovl_Mir_Ray2"
	include "z_en_wdhand.o"
	include "z_en_wdhand.rel"
endseg

beginseg
	name "ovl_En_Gamelupy"
	flags OBJECT
	after "ovl_En_Wdhand"
	include "z_en_gamelupy.o"
	include "z_en_gamelupy.rel"
endseg

beginseg
	name "ovl_Bg_Danpei_Movebg"
	flags OBJECT
	after "ovl_En_Gamelupy"
	include "z_bg_danpei_movebg.o"
	include "z_bg_danpei_movebg.rel"
endseg

beginseg
	name "ovl_En_Snowwd"
	flags OBJECT
	after "ovl_Bg_Danpei_Movebg"
	include "z_en_snowwd.o"
	include "z_en_snowwd.rel"
endseg

beginseg
	name "ovl_En_Pm"
	flags OBJECT
	after "ovl_En_Snowwd"
	include "z_en_pm.o"
	include "z_en_pm.rel"
endseg

beginseg
	name "ovl_En_Gakufu"
	flags OBJECT
	after "ovl_En_Pm"
	include "z_en_gakufu.o"
	include "z_en_gakufu.rel"
endseg

beginseg
	name "ovl_Elf_Msg4"
	flags OBJECT
	after "ovl_En_Gakufu"
	include "z_elf_msg4.o"
	include "z_elf_msg4.rel"
endseg

beginseg
	name "ovl_Elf_Msg5"
	flags OBJECT
	after "ovl_Elf_Msg4"
	include "z_elf_msg5.o"
	include "z_elf_msg5.rel"
endseg

beginseg
	name "ovl_En_Col_Man"
	flags OBJECT
	after "ovl_Elf_Msg5"
	include "z_en_col_man.o"
	include "z_en_col_man.rel"
endseg

beginseg
	name "ovl_En_Talk_Gibud"
	flags OBJECT
	after "ovl_En_Col_Man"
	include "z_en_talk_gibud.o"
	include "z_en_talk_gibud.rel"
endseg

beginseg
	name "ovl_En_Giant"
	flags OBJECT
	after "ovl_En_Talk_Gibud"
	include "z_en_giant.o"
	include "z_en_giant.rel"
endseg

beginseg
	name "ovl_Obj_Snowball"
	flags OBJECT
	after "ovl_En_Giant"
	include "z_obj_snowball.o"
	include "z_obj_snowball.rel"
endseg

beginseg
	name "ovl_Boss_Hakugin"
	flags OBJECT
	after "ovl_Obj_Snowball"
	include "z_boss_hakugin.o"
	include "z_boss_hakugin.rel"
endseg

beginseg
	name "ovl_En_Gb2"
	flags OBJECT
	after "ovl_Boss_Hakugin"
	include "z_en_gb2.o"
	include "z_en_gb2.rel"
endseg

beginseg
	name "ovl_En_Onpuman"
	flags OBJECT
	after "ovl_En_Gb2"
	include "z_en_onpuman.o"
	include "z_en_onpuman.rel"
endseg

beginseg
	name "ovl_Bg_Tobira01"
	flags OBJECT
	after "ovl_En_Onpuman"
	include "z_bg_tobira01.o"
	include "z_bg_tobira01.rel"
endseg

beginseg
	name "ovl_En_Tag_Obj"
	flags OBJECT
	after "ovl_Bg_Tobira01"
	include "z_en_tag_obj.o"
	include "z_en_tag_obj.rel"
endseg

beginseg
	name "ovl_Obj_Dhouse"
	flags OBJECT
	after "ovl_En_Tag_Obj"
	include "z_obj_dhouse.o"
	include "z_obj_dhouse.rel"
endseg

beginseg
	name "ovl_Obj_Hakaisi"
	flags OBJECT
	after "ovl_Obj_Dhouse"
	include "z_obj_hakaisi.o"
	include "z_obj_hakaisi.rel"
endseg

beginseg
	name "ovl_Bg_Hakugin_Switch"
	flags OBJECT
	after "ovl_Obj_Hakaisi"
	include "z_bg_hakugin_switch.o"
	include "z_bg_hakugin_switch.rel"
endseg

beginseg
	name "ovl_En_Snowman"
	flags OBJECT
	after "ovl_Bg_Hakugin_Switch"
	include "z_en_snowman.o"
	include "z_en_snowman.rel"
endseg

beginseg
	name "ovl_TG_Sw"
	flags OBJECT
	after "ovl_En_Snowman"
	include "z_tg_sw.o"
	include "z_tg_sw.rel"
endseg

beginseg
	name "ovl_En_Po_Sisters"
	flags OBJECT
	after "ovl_TG_Sw"
	include "z_en_po_sisters.o"
	include "z_en_po_sisters.rel"
endseg

beginseg
	name "ovl_En_Pp"
	flags OBJECT
	after "ovl_En_Po_Sisters"
	include "z_en_pp.o"
	include "z_en_pp.rel"
endseg

beginseg
	name "ovl_En_Hakurock"
	flags OBJECT
	after "ovl_En_Pp"
	include "z_en_hakurock.o"
	include "z_en_hakurock.rel"
endseg

beginseg
	name "ovl_En_Hanabi"
	flags OBJECT
	after "ovl_En_Hakurock"
	include "z_en_hanabi.o"
	include "z_en_hanabi.rel"
endseg

beginseg
	name "ovl_Obj_Dowsing"
	flags OBJECT
	after "ovl_En_Hanabi"
	include "z_obj_dowsing.o"
	include "z_obj_dowsing.rel"
endseg

beginseg
	name "ovl_Obj_Wind"
	flags OBJECT
	after "ovl_Obj_Dowsing"
	include "z_obj_wind.o"
	include "z_obj_wind.rel"
endseg

beginseg
	name "ovl_En_Racedog"
	flags OBJECT
	after "ovl_Obj_Wind"
	include "z_en_racedog.o"
	include "z_en_racedog.rel"
endseg

beginseg
	name "ovl_En_Kendo_Js"
	flags OBJECT
	after "ovl_En_Racedog"
	include "z_en_kendo_js.o"
	include "z_en_kendo_js.rel"
endseg

beginseg
	name "ovl_Bg_Botihasira"
	flags OBJECT
	after "ovl_En_Kendo_Js"
	include "z_bg_botihasira.o"
	include "z_bg_botihasira.rel"
endseg

beginseg
	name "ovl_En_Fish2"
	flags OBJECT
	after "ovl_Bg_Botihasira"
	include "z_en_fish2.o"
	include "z_en_fish2.rel"
endseg

beginseg
	name "ovl_En_Pst"
	flags OBJECT
	after "ovl_En_Fish2"
	include "z_en_pst.o"
	include "z_en_pst.rel"
endseg

beginseg
	name "ovl_En_Poh"
	flags OBJECT
	after "ovl_En_Pst"
	include "z_en_poh.o"
	include "z_en_poh.rel"
endseg

beginseg
	name "ovl_Obj_Spidertent"
	flags OBJECT
	after "ovl_En_Poh"
	include "z_obj_spidertent.o"
	include "z_obj_spidertent.rel"
endseg

beginseg
	name "ovl_En_Zoraegg"
	flags OBJECT
	after "ovl_Obj_Spidertent"
	include "z_en_zoraegg.o"
	include "z_en_zoraegg.rel"
endseg

beginseg
	name "ovl_En_Kbt"
	flags OBJECT
	after "ovl_En_Zoraegg"
	include "z_en_kbt.o"
	include "z_en_kbt.rel"
endseg

beginseg
	name "ovl_En_Gg"
	flags OBJECT
	after "ovl_En_Kbt"
	include "z_en_gg.o"
	include "z_en_gg.rel"
endseg

beginseg
	name "ovl_En_Maruta"
	flags OBJECT
	after "ovl_En_Gg"
	include "z_en_maruta.o"
	include "z_en_maruta.rel"
endseg

beginseg
	name "ovl_Obj_Snowball2"
	flags OBJECT
	after "ovl_En_Maruta"
	include "z_obj_snowball2.o"
	include "z_obj_snowball2.rel"
endseg

beginseg
	name "ovl_En_Gg2"
	flags OBJECT
	after "ovl_Obj_Snowball2"
	include "z_en_gg2.o"
	include "z_en_gg2.rel"
endseg

beginseg
	name "ovl_Obj_Ghaka"
	flags OBJECT
	after "ovl_En_Gg2"
	include "z_obj_ghaka.o"
	include "z_obj_ghaka.rel"
endseg

beginseg
	name "ovl_En_Dnp"
	flags OBJECT
	after "ovl_Obj_Ghaka"
	include "z_en_dnp.o"
	include "z_en_dnp.rel"
endseg

beginseg
	name "ovl_En_Dai"
	flags OBJECT
	after "ovl_En_Dnp"
	include "z_en_dai.o"
	include "z_en_dai.rel"
endseg

beginseg
	name "ovl_Bg_Goron_Oyu"
	flags OBJECT
	after "ovl_En_Dai"
	include "z_bg_goron_oyu.o"
	include "z_bg_goron_oyu.rel"
endseg

beginseg
	name "ovl_En_Kgy"
	flags OBJECT
	after "ovl_Bg_Goron_Oyu"
	include "z_en_kgy.o"
	include "z_en_kgy.rel"
endseg

beginseg
	name "ovl_En_Invadepoh"
	flags OBJECT
	after "ovl_En_Kgy"
	include "z_en_invadepoh.o"
	include "z_en_invadepoh.rel"
endseg

beginseg
	name "ovl_En_Gk"
	flags OBJECT
	after "ovl_En_Invadepoh"
	include "z_en_gk.o"
	include "z_en_gk.rel"
endseg

beginseg
	name "ovl_En_An"
	flags OBJECT
	after "ovl_En_Gk"
	include "z_en_an.o"
	include "z_en_an.rel"
endseg

beginseg
	name "ovl_En_Bee"
	flags OBJECT
	after "ovl_En_An"
	include "z_en_bee.o"
	include "z_en_bee.rel"
endseg

beginseg
	name "ovl_En_Ot"
	flags OBJECT
	after "ovl_En_Bee"
	include "z_en_ot.o"
	include "z_en_ot.rel"
endseg

beginseg
	name "ovl_En_Dragon"
	flags OBJECT
	after "ovl_En_Ot"
	include "z_en_dragon.o"
	include "z_en_dragon.rel"
endseg

beginseg
	name "ovl_Obj_Dora"
	flags OBJECT
	after "ovl_En_Dragon"
	include "z_obj_dora.o"
	include "z_obj_dora.rel"
endseg

beginseg
	name "ovl_En_Bigpo"
	flags OBJECT
	after "ovl_Obj_Dora"
	include "z_en_bigpo.o"
	include "z_en_bigpo.rel"
endseg

beginseg
	name "ovl_Obj_Kendo_Kanban"
	flags OBJECT
	after "ovl_En_Bigpo"
	include "z_obj_kendo_kanban.o"
	include "z_obj_kendo_kanban.rel"
endseg

beginseg
	name "ovl_Obj_Hariko"
	flags OBJECT
	after "ovl_Obj_Kendo_Kanban"
	include "z_obj_hariko.o"
	include "z_obj_hariko.rel"
endseg

beginseg
	name "ovl_En_Sth"
	flags OBJECT
	after "ovl_Obj_Hariko"
	include "z_en_sth.o"
	include "z_en_sth.rel"
endseg

beginseg
	name "ovl_Bg_Sinkai_Kabe"
	flags OBJECT
	after "ovl_En_Sth"
	include "z_bg_sinkai_kabe.o"
	include "z_bg_sinkai_kabe.rel"
endseg

beginseg
	name "ovl_Bg_Haka_Curtain"
	flags OBJECT
	after "ovl_Bg_Sinkai_Kabe"
	include "z_bg_haka_curtain.o"
	include "z_bg_haka_curtain.rel"
endseg

beginseg
	name "ovl_Bg_Kin2_Bombwall"
	flags OBJECT
	after "ovl_Bg_Haka_Curtain"
	include "z_bg_kin2_bombwall.o"
	include "z_bg_kin2_bombwall.rel"
endseg

beginseg
	name "ovl_Bg_Kin2_Fence"
	flags OBJECT
	after "ovl_Bg_Kin2_Bombwall"
	include "z_bg_kin2_fence.o"
	include "z_bg_kin2_fence.rel"
endseg

beginseg
	name "ovl_Bg_Kin2_Picture"
	flags OBJECT
	after "ovl_Bg_Kin2_Fence"
	include "z_bg_kin2_picture.o"
	include "z_bg_kin2_picture.rel"
endseg

beginseg
	name "ovl_Bg_Kin2_Shelf"
	flags OBJECT
	after "ovl_Bg_Kin2_Picture"
	include "z_bg_kin2_shelf.o"
	include "z_bg_kin2_shelf.rel"
endseg

beginseg
	name "ovl_En_Rail_Skb"
	flags OBJECT
	after "ovl_Bg_Kin2_Shelf"
	include "z_en_rail_skb.o"
	include "z_en_rail_skb.rel"
endseg

beginseg
	name "ovl_En_Jg"
	flags OBJECT
	after "ovl_En_Rail_Skb"
	include "z_en_jg.o"
	include "z_en_jg.rel"
endseg

beginseg
	name "ovl_En_Tru_Mt"
	flags OBJECT
	after "ovl_En_Jg"
	include "z_en_tru_mt.o"
	include "z_en_tru_mt.rel"
endseg

beginseg
	name "ovl_Obj_Um"
	flags OBJECT
	after "ovl_En_Tru_Mt"
	include "z_obj_um.o"
	include "z_obj_um.rel"
endseg

beginseg
	name "ovl_En_Neo_Reeba"
	flags OBJECT
	after "ovl_Obj_Um"
	include "z_en_neo_reeba.o"
	include "z_en_neo_reeba.rel"
endseg

beginseg
	name "ovl_Bg_Mbar_Chair"
	flags OBJECT
	after "ovl_En_Neo_Reeba"
	include "z_bg_mbar_chair.o"
	include "z_bg_mbar_chair.rel"
endseg

beginseg
	name "ovl_Bg_Ikana_Block"
	flags OBJECT
	after "ovl_Bg_Mbar_Chair"
	include "z_bg_ikana_block.o"
	include "z_bg_ikana_block.rel"
endseg

beginseg
	name "ovl_Bg_Ikana_Mirror"
	flags OBJECT
	after "ovl_Bg_Ikana_Block"
	include "z_bg_ikana_mirror.o"
	include "z_bg_ikana_mirror.rel"
endseg

beginseg
	name "ovl_Bg_Ikana_Rotaryroom"
	flags OBJECT
	after "ovl_Bg_Ikana_Mirror"
	include "z_bg_ikana_rotaryroom.o"
	include "z_bg_ikana_rotaryroom.rel"
endseg

beginseg
	name "ovl_Bg_Dblue_Balance"
	flags OBJECT
	after "ovl_Bg_Ikana_Rotaryroom"
	include "z_bg_dblue_balance.o"
	include "z_bg_dblue_balance.rel"
endseg

beginseg
	name "ovl_Bg_Dblue_Waterfall"
	flags OBJECT
	after "ovl_Bg_Dblue_Balance"
	include "z_bg_dblue_waterfall.o"
	include "z_bg_dblue_waterfall.rel"
endseg

beginseg
	name "ovl_En_Kaizoku"
	flags OBJECT
	after "ovl_Bg_Dblue_Waterfall"
	include "z_en_kaizoku.o"
	include "z_en_kaizoku.rel"
endseg

beginseg
	name "ovl_En_Ge2"
	flags OBJECT
	after "ovl_En_Kaizoku"
	include "z_en_ge2.o"
	include "z_en_ge2.rel"
endseg

beginseg
	name "ovl_En_Ma_Yts"
	flags OBJECT
	after "ovl_En_Ge2"
	include "z_en_ma_yts.o"
	include "z_en_ma_yts.rel"
endseg

beginseg
	name "ovl_En_Ma_Yto"
	flags OBJECT
	after "ovl_En_Ma_Yts"
	include "z_en_ma_yto.o"
	include "z_en_ma_yto.rel"
endseg

beginseg
	name "ovl_Obj_Tokei_Turret"
	flags OBJECT
	after "ovl_En_Ma_Yto"
	include "z_obj_tokei_turret.o"
	include "z_obj_tokei_turret.rel"
endseg

beginseg
	name "ovl_Bg_Dblue_Elevator"
	flags OBJECT
	after "ovl_Obj_Tokei_Turret"
	include "z_bg_dblue_elevator.o"
	include "z_bg_dblue_elevator.rel"
endseg

beginseg
	name "ovl_Obj_Warpstone"
	flags OBJECT
	after "ovl_Bg_Dblue_Elevator"
	include "z_obj_warpstone.o"
	include "z_obj_warpstone.rel"
endseg

beginseg
	name "ovl_En_Zog"
	flags OBJECT
	after "ovl_Obj_Warpstone"
	include "z_en_zog.o"
	include "z_en_zog.rel"
endseg

beginseg
	name "ovl_Obj_Rotlift"
	flags OBJECT
	after "ovl_En_Zog"
	include "z_obj_rotlift.o"
	include "z_obj_rotlift.rel"
endseg

beginseg
	name "ovl_Obj_Jg_Gakki"
	flags OBJECT
	after "ovl_Obj_Rotlift"
	include "z_obj_jg_gakki.o"
	include "z_obj_jg_gakki.rel"
endseg

beginseg
	name "ovl_Bg_Inibs_Movebg"
	flags OBJECT
	after "ovl_Obj_Jg_Gakki"
	include "z_bg_inibs_movebg.o"
	include "z_bg_inibs_movebg.rel"
endseg

beginseg
	name "ovl_En_Zot"
	flags OBJECT
	after "ovl_Bg_Inibs_Movebg"
	include "z_en_zot.o"
	include "z_en_zot.rel"
endseg

beginseg
	name "ovl_Obj_Tree"
	flags OBJECT
	after "ovl_En_Zot"
	include "z_obj_tree.o"
	include "z_obj_tree.rel"
endseg

beginseg
	name "ovl_Obj_Y2lift"
	flags OBJECT
	after "ovl_Obj_Tree"
	include "z_obj_Y2lift.o"
	include "z_obj_Y2lift.rel"
endseg

beginseg
	name "ovl_Obj_Y2shutter"
	flags OBJECT
	after "ovl_Obj_Y2lift"
	include "z_obj_Y2shutter.o"
	include "z_obj_Y2shutter.rel"
endseg

beginseg
	name "ovl_Obj_Boat"
	flags OBJECT
	after "ovl_Obj_Y2shutter"
	include "z_obj_boat.o"
	include "z_obj_boat.rel"
endseg

beginseg
	name "ovl_Obj_Taru"
	flags OBJECT
	after "ovl_Obj_Boat"
	include "z_obj_taru.o"
	include "z_obj_taru.rel"
endseg

beginseg
	name "ovl_Obj_Hunsui"
	flags OBJECT
	after "ovl_Obj_Taru"
	include "z_obj_hunsui.o"
	include "z_obj_hunsui.rel"
endseg

beginseg
	name "ovl_En_Jc_Mato"
	flags OBJECT
	after "ovl_Obj_Hunsui"
	include "z_en_jc_mato.o"
	include "z_en_jc_mato.rel"
endseg

beginseg
	name "ovl_Mir_Ray3"
	flags OBJECT
	after "ovl_En_Jc_Mato"
	include "z_mir_ray3.o"
	include "z_mir_ray3.rel"
endseg

beginseg
	name "ovl_En_Zob"
	flags OBJECT
	after "ovl_Mir_Ray3"
	include "z_en_zob.o"
	include "z_en_zob.rel"
endseg

beginseg
	name "ovl_Elf_Msg6"
	flags OBJECT
	after "ovl_En_Zob"
	include "z_elf_msg6.o"
	include "z_elf_msg6.rel"
endseg

beginseg
	name "ovl_Obj_Nozoki"
	flags OBJECT
	after "ovl_Elf_Msg6"
	include "z_obj_nozoki.o"
	include "z_obj_nozoki.rel"
endseg

beginseg
	name "ovl_En_Toto"
	flags OBJECT
	after "ovl_Obj_Nozoki"
	include "z_en_toto.o"
	include "z_en_toto.rel"
endseg

beginseg
	name "ovl_En_Railgibud"
	flags OBJECT
	after "ovl_En_Toto"
	include "z_en_railgibud.o"
	include "z_en_railgibud.rel"
endseg

beginseg
	name "ovl_En_Baba"
	flags OBJECT
	after "ovl_En_Railgibud"
	include "z_en_baba.o"
	include "z_en_baba.rel"
endseg

beginseg
	name "ovl_En_Suttari"
	flags OBJECT
	after "ovl_En_Baba"
	include "z_en_suttari.o"
	include "z_en_suttari.rel"
endseg

beginseg
	name "ovl_En_Zod"
	flags OBJECT
	after "ovl_En_Suttari"
	include "z_en_zod.o"
	include "z_en_zod.rel"
endseg

beginseg
	name "ovl_En_Kujiya"
	flags OBJECT
	after "ovl_En_Zod"
	include "z_en_kujiya.o"
	include "z_en_kujiya.rel"
endseg

beginseg
	name "ovl_En_Geg"
	flags OBJECT
	after "ovl_En_Kujiya"
	include "z_en_geg.o"
	include "z_en_geg.rel"
endseg

beginseg
	name "ovl_Obj_Kinoko"
	flags OBJECT
	after "ovl_En_Geg"
	include "z_obj_kinoko.o"
	include "z_obj_kinoko.rel"
endseg

beginseg
	name "ovl_Obj_Yasi"
	flags OBJECT
	after "ovl_Obj_Kinoko"
	include "z_obj_yasi.o"
	include "z_obj_yasi.rel"
endseg

beginseg
	name "ovl_En_Tanron1"
	flags OBJECT
	after "ovl_Obj_Yasi"
	include "z_en_tanron1.o"
	include "z_en_tanron1.rel"
endseg

beginseg
	name "ovl_En_Tanron2"
	flags OBJECT
	after "ovl_En_Tanron1"
	include "z_en_tanron2.o"
	include "z_en_tanron2.rel"
endseg

beginseg
	name "ovl_En_Tanron3"
	flags OBJECT
	after "ovl_En_Tanron2"
	include "z_en_tanron3.o"
	include "z_en_tanron3.rel"
endseg

beginseg
	name "ovl_Obj_Chan"
	flags OBJECT
	after "ovl_En_Tanron3"
	include "z_obj_chan.o"
	include "z_obj_chan.rel"
endseg

beginseg
	name "ovl_En_Zos"
	flags OBJECT
	after "ovl_Obj_Chan"
	include "z_en_zos.o"
	include "z_en_zos.rel"
endseg

beginseg
	name "ovl_En_S_Goro"
	flags OBJECT
	after "ovl_En_Zos"
	include "z_en_s_goro.o"
	include "z_en_s_goro.rel"
endseg

beginseg
	name "ovl_En_Nb"
	flags OBJECT
	after "ovl_En_S_Goro"
	include "z_en_nb.o"
	include "z_en_nb.rel"
endseg

beginseg
	name "ovl_En_Ja"
	flags OBJECT
	after "ovl_En_Nb"
	include "z_en_ja.o"
	include "z_en_ja.rel"
endseg

beginseg
	name "ovl_Bg_F40_Block"
	flags OBJECT
	after "ovl_En_Ja"
	include "z_bg_f40_block.o"
	include "z_bg_f40_block.rel"
endseg

beginseg
	name "ovl_Bg_F40_Switch"
	flags OBJECT
	after "ovl_Bg_F40_Block"
	include "z_bg_f40_switch.o"
	include "z_bg_f40_switch.rel"
endseg

beginseg
	name "ovl_En_Po_Composer"
	flags OBJECT
	after "ovl_Bg_F40_Switch"
	include "z_en_po_composer.o"
	include "z_en_po_composer.rel"
endseg

beginseg
	name "ovl_En_Guruguru"
	flags OBJECT
	after "ovl_En_Po_Composer"
	include "z_en_guruguru.o"
	include "z_en_guruguru.rel"
endseg

beginseg
	name "ovl_Oceff_Wipe5"
	flags OBJECT
	after "ovl_En_Guruguru"
	include "z_oceff_wipe5.o"
	include "z_oceff_wipe5.rel"
endseg

beginseg
	name "ovl_En_Stone_heishi"
	flags OBJECT
	after "ovl_Oceff_Wipe5"
	include "z_en_stone_heishi.o"
	include "z_en_stone_heishi.rel"
endseg

beginseg
	name "ovl_Oceff_Wipe6"
	flags OBJECT
	after "ovl_En_Stone_heishi"
	include "z_oceff_wipe6.o"
	include "z_oceff_wipe6.rel"
endseg

beginseg
	name "ovl_En_Scopenuts"
	flags OBJECT
	after "ovl_Oceff_Wipe6"
	include "z_en_scopenuts.o"
	include "z_en_scopenuts.rel"
endseg

beginseg
	name "ovl_En_Scopecrow"
	flags OBJECT
	after "ovl_En_Scopenuts"
	include "z_en_scopecrow.o"
	include "z_en_scopecrow.rel"
endseg

beginseg
	name "ovl_Oceff_Wipe7"
	flags OBJECT
	after "ovl_En_Scopecrow"
	include "z_oceff_wipe7.o"
	include "z_oceff_wipe7.rel"
endseg

beginseg
	name "ovl_Eff_Kamejima_Wave"
	flags OBJECT
	after "ovl_Oceff_Wipe7"
	include "z_eff_kamejima_wave.o"
	include "z_eff_kamejima_wave.rel"
endseg

beginseg
	name "ovl_En_Hg"
	flags OBJECT
	after "ovl_Eff_Kamejima_Wave"
	include "z_en_hg.o"
	include "z_en_hg.rel"
endseg

beginseg
	name "ovl_En_Hgo"
	flags OBJECT
	after "ovl_En_Hg"
	include "z_en_hgo.o"
	include "z_en_hgo.rel"
endseg

beginseg
	name "ovl_En_Zov"
	flags OBJECT
	after "ovl_En_Hgo"
	include "z_en_zov.o"
	include "z_en_zov.rel"
endseg

beginseg
	name "ovl_En_Ah"
	flags OBJECT
	after "ovl_En_Zov"
	include "z_en_ah.o"
	include "z_en_ah.rel"
endseg

beginseg
	name "ovl_Obj_Hgdoor"
	flags OBJECT
	after "ovl_En_Ah"
	include "z_obj_hgdoor.o"
	include "z_obj_hgdoor.rel"
endseg

beginseg
	name "ovl_Bg_Ikana_Bombwall"
	flags OBJECT
	after "ovl_Obj_Hgdoor"
	include "z_bg_ikana_bombwall.o"
	include "z_bg_ikana_bombwall.rel"
endseg

beginseg
	name "ovl_Bg_Ikana_Ray"
	flags OBJECT
	after "ovl_Bg_Ikana_Bombwall"
	include "z_bg_ikana_ray.o"
	include "z_bg_ikana_ray.rel"
endseg

beginseg
	name "ovl_Bg_Ikana_Shutter"
	flags OBJECT
	after "ovl_Bg_Ikana_Ray"
	include "z_bg_ikana_shutter.o"
	include "z_bg_ikana_shutter.rel"
endseg

beginseg
	name "ovl_Bg_Haka_Bombwall"
	flags OBJECT
	after "ovl_Bg_Ikana_Shutter"
	include "z_bg_haka_bombwall.o"
	include "z_bg_haka_bombwall.rel"
endseg

beginseg
	name "ovl_Bg_Haka_Tomb"
	flags OBJECT
	after "ovl_Bg_Haka_Bombwall"
	include "z_bg_haka_tomb.o"
	include "z_bg_haka_tomb.rel"
endseg

beginseg
	name "ovl_En_Sc_Ruppe"
	flags OBJECT
	after "ovl_Bg_Haka_Tomb"
	include "z_en_sc_ruppe.o"
	include "z_en_sc_ruppe.rel"
endseg

beginseg
	name "ovl_Bg_Iknv_Doukutu"
	flags OBJECT
	after "ovl_En_Sc_Ruppe"
	include "z_bg_iknv_doukutu.o"
	include "z_bg_iknv_doukutu.rel"
endseg

beginseg
	name "ovl_Bg_Iknv_Obj"
	flags OBJECT
	after "ovl_Bg_Iknv_Doukutu"
	include "z_bg_iknv_obj.o"
	include "z_bg_iknv_obj.rel"
endseg

beginseg
	name "ovl_En_Pamera"
	flags OBJECT
	after "ovl_Bg_Iknv_Obj"
	include "z_en_pamera.o"
	include "z_en_pamera.rel"
endseg

beginseg
	name "ovl_Obj_HsStump"
	flags OBJECT
	after "ovl_En_Pamera"
	include "z_obj_hsstump.o"
	include "z_obj_hsstump.rel"
endseg

beginseg
	name "ovl_En_Hidden_Nuts"
	flags OBJECT
	after "ovl_Obj_HsStump"
	include "z_en_hidden_nuts.o"
	include "z_en_hidden_nuts.rel"
endseg

beginseg
	name "ovl_En_Zow"
	flags OBJECT
	after "ovl_En_Hidden_Nuts"
	include "z_en_zow.o"
	include "z_en_zow.rel"
endseg

beginseg
	name "ovl_En_Talk"
	flags OBJECT
	after "ovl_En_Zow"
	include "z_en_talk.o"
	include "z_en_talk.rel"
endseg

beginseg
	name "ovl_En_Al"
	flags OBJECT
	after "ovl_En_Talk"
	include "z_en_al.o"
	include "z_en_al.rel"
endseg

beginseg
	name "ovl_En_Tab"
	flags OBJECT
	after "ovl_En_Al"
	include "z_en_tab.o"
	include "z_en_tab.rel"
endseg

beginseg
	name "ovl_En_Nimotsu"
	flags OBJECT
	after "ovl_En_Tab"
	include "z_en_nimotsu.o"
	include "z_en_nimotsu.rel"
endseg

beginseg
	name "ovl_En_Hit_Tag"
	flags OBJECT
	after "ovl_En_Nimotsu"
	include "z_en_hit_tag.o"
	include "z_en_hit_tag.rel"
endseg

beginseg
	name "ovl_En_Ruppecrow"
	flags OBJECT
	after "ovl_En_Hit_Tag"
	include "z_en_ruppecrow.o"
	include "z_en_ruppecrow.rel"
endseg

beginseg
	name "ovl_En_Tanron4"
	flags OBJECT
	after "ovl_En_Ruppecrow"
	include "z_en_tanron4.o"
	include "z_en_tanron4.rel"
endseg

beginseg
	name "ovl_En_Tanron5"
	flags OBJECT
	after "ovl_En_Tanron4"
	include "z_en_tanron5.o"
	include "z_en_tanron5.rel"
endseg

beginseg
	name "ovl_En_Tanron6"
	flags OBJECT
	after "ovl_En_Tanron5"
	include "z_en_tanron6.o"
	include "z_en_tanron6.rel"
endseg

beginseg
	name "ovl_En_Daiku2"
	flags OBJECT
	after "ovl_En_Tanron6"
	include "z_en_daiku2.o"
	include "z_en_daiku2.rel"
endseg

beginseg
	name "ovl_En_Muto"
	flags OBJECT
	after "ovl_En_Daiku2"
	include "z_en_muto.o"
	include "z_en_muto.rel"
endseg

beginseg
	name "ovl_En_Baisen"
	flags OBJECT
	after "ovl_En_Muto"
	include "z_en_baisen.o"
	include "z_en_baisen.rel"
endseg

beginseg
	name "ovl_En_Heishi"
	flags OBJECT
	after "ovl_En_Baisen"
	include "z_en_heishi.o"
	include "z_en_heishi.rel"
endseg

beginseg
	name "ovl_En_Demo_heishi"
	flags OBJECT
	after "ovl_En_Heishi"
	include "z_en_demo_heishi.o"
	include "z_en_demo_heishi.rel"
endseg

beginseg
	name "ovl_En_Dt"
	flags OBJECT
	after "ovl_En_Demo_heishi"
	include "z_en_dt.o"
	include "z_en_dt.rel"
endseg

beginseg
	name "ovl_En_Cha"
	flags OBJECT
	after "ovl_En_Dt"
	include "z_en_cha.o"
	include "z_en_cha.rel"
endseg

beginseg
	name "ovl_Obj_Dinner"
	flags OBJECT
	after "ovl_En_Cha"
	include "z_obj_dinner.o"
	include "z_obj_dinner.rel"
endseg

beginseg
	name "ovl_Eff_Lastday"
	flags OBJECT
	after "ovl_Obj_Dinner"
	include "z_eff_lastday.o"
	include "z_eff_lastday.rel"
endseg

beginseg
	name "ovl_Bg_Ikana_Dharma"
	flags OBJECT
	after "ovl_Eff_Lastday"
	include "z_bg_ikana_dharma.o"
	include "z_bg_ikana_dharma.rel"
endseg

beginseg
	name "ovl_En_Akindonuts"
	flags OBJECT
	after "ovl_Bg_Ikana_Dharma"
	include "z_en_akindonuts.o"
	include "z_en_akindonuts.rel"
endseg

beginseg
	name "ovl_Eff_Stk"
	flags OBJECT
	after "ovl_En_Akindonuts"
	include "z_eff_stk.o"
	include "z_eff_stk.rel"
endseg

beginseg
	name "ovl_En_Ig"
	flags OBJECT
	after "ovl_Eff_Stk"
	include "z_en_ig.o"
	include "z_en_ig.rel"
endseg

beginseg
	name "ovl_En_Rg"
	flags OBJECT
	after "ovl_En_Ig"
	include "z_en_rg.o"
	include "z_en_rg.rel"
endseg

beginseg
	name "ovl_En_Osk"
	flags OBJECT
	after "ovl_En_Rg"
	include "z_en_osk.o"
	include "z_en_osk.rel"
endseg

beginseg
	name "ovl_En_Sth2"
	flags OBJECT
	after "ovl_En_Osk"
	include "z_en_sth2.o"
	include "z_en_sth2.rel"
endseg

beginseg
	name "ovl_En_Yb"
	flags OBJECT
	after "ovl_En_Sth2"
	include "z_en_yb.o"
	include "z_en_yb.rel"
endseg

beginseg
	name "ovl_En_Rz"
	flags OBJECT
	after "ovl_En_Yb"
	include "z_en_rz.o"
	include "z_en_rz.rel"
endseg

beginseg
	name "ovl_En_Scopecoin"
	flags OBJECT
	after "ovl_En_Rz"
	include "z_en_scopecoin.o"
	include "z_en_scopecoin.rel"
endseg

beginseg
	name "ovl_En_Bjt"
	flags OBJECT
	after "ovl_En_Scopecoin"
	include "z_en_bjt.o"
	include "z_en_bjt.rel"
endseg

beginseg
	name "ovl_En_Bomjima"
	flags OBJECT
	after "ovl_En_Bjt"
	include "z_en_bomjima.o"
	include "z_en_bomjima.rel"
endseg

beginseg
	name "ovl_En_Bomjimb"
	flags OBJECT
	after "ovl_En_Bomjima"
	include "z_en_bomjimb.o"
	include "z_en_bomjimb.rel"
endseg

beginseg
	name "ovl_En_Bombers"
	flags OBJECT
	after "ovl_En_Bomjimb"
	include "z_en_bombers.o"
	include "z_en_bombers.rel"
endseg

beginseg
	name "ovl_En_Bombers2"
	flags OBJECT
	after "ovl_En_Bombers"
	include "z_en_bombers2.o"
	include "z_en_bombers2.rel"
endseg

beginseg
	name "ovl_En_Bombal"
	flags OBJECT
	after "ovl_En_Bombers2"
	include "z_en_bombal.o"
	include "z_en_bombal.rel"
endseg

beginseg
	name "ovl_Obj_Moon_Stone"
	flags OBJECT
	after "ovl_En_Bombal"
	include "z_obj_moon_stone.o"
	include "z_obj_moon_stone.rel"
endseg

beginseg
	name "ovl_Obj_Mu_Pict"
	flags OBJECT
	after "ovl_Obj_Moon_Stone"
	include "z_obj_mu_pict.o"
	include "z_obj_mu_pict.rel"
endseg

beginseg
	name "ovl_Bg_Ikninside"
	flags OBJECT
	after "ovl_Obj_Mu_Pict"
	include "z_bg_ikninside.o"
	include "z_bg_ikninside.rel"
endseg

beginseg
	name "ovl_Eff_Zoraband"
	flags OBJECT
	after "ovl_Bg_Ikninside"
	include "z_eff_zoraband.o"
	include "z_eff_zoraband.rel"
endseg

beginseg
	name "ovl_Obj_Kepn_Koya"
	flags OBJECT
	after "ovl_Eff_Zoraband"
	include "z_obj_kepn_koya.o"
	include "z_obj_kepn_koya.rel"
endseg

beginseg
	name "ovl_Obj_Usiyane"
	flags OBJECT
	after "ovl_Obj_Kepn_Koya"
	include "z_obj_usiyane.o"
	include "z_obj_usiyane.rel"
endseg

beginseg
	name "ovl_En_Nnh"
	flags OBJECT
	after "ovl_Obj_Usiyane"
	include "z_en_nnh.o"
	include "z_en_nnh.rel"
endseg

beginseg
	name "ovl_Obj_Kzsaku"
	flags OBJECT
	after "ovl_En_Nnh"
	include "z_obj_kzsaku.o"
	include "z_obj_kzsaku.rel"
endseg

beginseg
	name "ovl_Obj_Milk_Bin"
	flags OBJECT
	after "ovl_Obj_Kzsaku"
	include "z_obj_milk_bin.o"
	include "z_obj_milk_bin.rel"
endseg

beginseg
	name "ovl_En_Kitan"
	flags OBJECT
	after "ovl_Obj_Milk_Bin"
	include "z_en_kitan.o"
	include "z_en_kitan.rel"
endseg

beginseg
	name "ovl_Bg_Astr_Bombwall"
	flags OBJECT
	after "ovl_En_Kitan"
	include "z_bg_astr_bombwall.o"
	include "z_bg_astr_bombwall.rel"
endseg

beginseg
	name "ovl_Bg_Iknin_Susceil"
	flags OBJECT
	after "ovl_Bg_Astr_Bombwall"
	include "z_bg_iknin_susceil.o"
	include "z_bg_iknin_susceil.rel"
endseg

beginseg
	name "ovl_En_Bsb"
	flags OBJECT
	after "ovl_Bg_Iknin_Susceil"
	include "z_en_bsb.o"
	include "z_en_bsb.rel"
endseg

beginseg
	name "ovl_En_Recepgirl"
	flags OBJECT
	after "ovl_En_Bsb"
	include "z_en_recepgirl.o"
	include "z_en_recepgirl.rel"
endseg

beginseg
	name "ovl_En_Thiefbird"
	flags OBJECT
	after "ovl_En_Recepgirl"
	include "z_en_thiefbird.o"
	include "z_en_thiefbird.rel"
endseg

beginseg
	name "ovl_En_Jgame_Tsn"
	flags OBJECT
	after "ovl_En_Thiefbird"
	include "z_en_jgame_tsn.o"
	include "z_en_jgame_tsn.rel"
endseg

beginseg
	name "ovl_Obj_Jgame_Light"
	flags OBJECT
	after "ovl_En_Jgame_Tsn"
	include "z_obj_jgame_light.o"
	include "z_obj_jgame_light.rel"
endseg

beginseg
	name "ovl_Obj_Yado"
	flags OBJECT
	after "ovl_Obj_Jgame_Light"
	include "z_obj_yado.o"
	include "z_obj_yado.rel"
endseg

beginseg
	name "ovl_Demo_Syoten"
	flags OBJECT
	after "ovl_Obj_Yado"
	include "z_demo_syoten.o"
	include "z_demo_syoten.rel"
endseg

beginseg
	name "ovl_Demo_Moonend"
	flags OBJECT
	after "ovl_Demo_Syoten"
	include "z_demo_moonend.o"
	include "z_demo_moonend.rel"
endseg

beginseg
	name "ovl_Bg_Lbfshot"
	flags OBJECT
	after "ovl_Demo_Moonend"
	include "z_bg_lbfshot.o"
	include "z_bg_lbfshot.rel"
endseg

beginseg
	name "ovl_Bg_Last_Bwall"
	flags OBJECT
	after "ovl_Bg_Lbfshot"
	include "z_bg_last_bwall.o"
	include "z_bg_last_bwall.rel"
endseg

beginseg
	name "ovl_En_And"
	flags OBJECT
	after "ovl_Bg_Last_Bwall"
	include "z_en_and.o"
	include "z_en_and.rel"
endseg

beginseg
	name "ovl_En_Invadepoh_Demo"
	flags OBJECT
	after "ovl_En_And"
	include "z_en_invadepoh_demo.o"
	include "z_en_invadepoh_demo.rel"
endseg

beginseg
	name "ovl_Obj_Danpeilift"
	flags OBJECT
	after "ovl_En_Invadepoh_Demo"
	include "z_obj_danpeilift.o"
	include "z_obj_danpeilift.rel"
endseg

beginseg
	name "ovl_En_Fall2"
	flags OBJECT
	after "ovl_Obj_Danpeilift"
	include "z_en_fall2.o"
	include "z_en_fall2.rel"
endseg

beginseg
	name "ovl_Dm_Al"
	flags OBJECT
	after "ovl_En_Fall2"
	include "z_dm_al.o"
	include "z_dm_al.rel"
endseg

beginseg
	name "ovl_Dm_An"
	flags OBJECT
	after "ovl_Dm_Al"
	include "z_dm_an.o"
	include "z_dm_an.rel"
endseg

beginseg
	name "ovl_Dm_Ah"
	flags OBJECT
	after "ovl_Dm_An"
	include "z_dm_ah.o"
	include "z_dm_ah.rel"
endseg

beginseg
	name "ovl_Dm_Nb"
	flags OBJECT
	after "ovl_Dm_Ah"
	include "z_dm_nb.o"
	include "z_dm_nb.rel"
endseg

beginseg
	name "ovl_En_Drs"
	flags OBJECT
	after "ovl_Dm_Nb"
	include "z_en_drs.o"
	include "z_en_drs.rel"
endseg

beginseg
	name "ovl_En_Ending_Hero"
	flags OBJECT
	after "ovl_En_Drs"
	include "z_en_ending_hero.o"
	include "z_en_ending_hero.rel"
endseg

beginseg
	name "ovl_Dm_Bal"
	flags OBJECT
	after "ovl_En_Ending_Hero"
	include "z_dm_bal.o"
	include "z_dm_bal.rel"
endseg

beginseg
	name "ovl_En_Paper"
	flags OBJECT
	after "ovl_Dm_Bal"
	include "z_en_paper.o"
	include "z_en_paper.rel"
endseg

beginseg
	name "ovl_En_Hint_Skb"
	flags OBJECT
	after "ovl_En_Paper"
	include "z_en_hint_skb.o"
	include "z_en_hint_skb.rel"
endseg

beginseg
	name "ovl_Dm_Tag"
	flags OBJECT
	after "ovl_En_Hint_Skb"
	include "z_dm_tag.o"
	include "z_dm_tag.rel"
endseg

beginseg
	name "ovl_En_Bh"
	flags OBJECT
	after "ovl_Dm_Tag"
	include "z_en_bh.o"
	include "z_en_bh.rel"
endseg

beginseg
	name "ovl_En_Ending_Hero2"
	flags OBJECT
	after "ovl_En_Bh"
	include "z_en_ending_hero2.o"
	include "z_en_ending_hero2.rel"
endseg

beginseg
	name "ovl_En_Ending_Hero3"
	flags OBJECT
	after "ovl_En_Ending_Hero2"
	include "z_en_ending_hero3.o"
	include "z_en_ending_hero3.rel"
endseg

beginseg
	name "ovl_En_Ending_Hero4"
	flags OBJECT
	after "ovl_En_Ending_Hero3"
	include "z_en_ending_hero4.o"
	include "z_en_ending_hero4.rel"
endseg

beginseg
	name "ovl_En_Ending_Hero5"
	flags OBJECT
	after "ovl_En_Ending_Hero4"
	include "z_en_ending_hero5.o"
	include "z_en_ending_hero5.rel"
endseg

beginseg
	name "ovl_En_Ending_Hero6"
	flags OBJECT
	after "ovl_En_Ending_Hero5"
	include "z_en_ending_hero6.o"
	include "z_en_ending_hero6.rel"
endseg

beginseg
	name "ovl_Dm_Gm"
	flags OBJECT
	after "ovl_En_Ending_Hero6"
	include "z_dm_gm.o"
	include "z_dm_gm.rel"
endseg

beginseg
	name "ovl_Obj_Swprize"
	flags OBJECT
	after "ovl_Dm_Gm"
	include "z_obj_swprize.o"
	include "z_obj_swprize.rel"
endseg

beginseg
	name "ovl_En_Invisible_Ruppe"
	flags OBJECT
	after "ovl_Obj_Swprize"
	include "z_en_invisible_ruppe.o"
	include "z_en_invisible_ruppe.rel"
endseg

beginseg
	name "ovl_Obj_Ending"
	flags OBJECT
	after "ovl_En_Invisible_Ruppe"
	include "z_obj_ending.o"
	include "z_obj_ending.rel"
endseg

beginseg
	name "ovl_En_Rsn"
	flags OBJECT
	after "ovl_Obj_Ending"
	include "z_en_rsn.o"
	include "z_en_rsn.rel"
endseg
