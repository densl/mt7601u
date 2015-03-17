#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2b22e0c3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0x61e836a8, __VMLINUX_SYMBOL_STR(RtmpDevPrivFlagsGet) },
	{ 0xace1a41b, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9b185c08, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x28f9a3f8, __VMLINUX_SYMBOL_STR(RtmpOSNetDevFree) },
	{ 0xfcaa7f6b, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x49009ad5, __VMLINUX_SYMBOL_STR(RtmpOSNetDevDetach) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x4c5ee785, __VMLINUX_SYMBOL_STR(RtmpOsSetNetDevPriv) },
	{ 0x74a2800d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x2a8ef6f7, __VMLINUX_SYMBOL_STR(Rtmp_Drv_Ops_usb) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x36b95745, __VMLINUX_SYMBOL_STR(RtmpOSNetDevAttach) },
	{ 0x19f9b2ae, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x9cd55864, __VMLINUX_SYMBOL_STR(os_free_mem) },
	{ 0xe243d198, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x873fd4d1, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9f901ef6, __VMLINUX_SYMBOL_STR(RtmpOsGetNetDevPriv) },
	{ 0x757d9021, __VMLINUX_SYMBOL_STR(RTDebugLevel) },
	{ 0x801678, __VMLINUX_SYMBOL_STR(flush_scheduled_work) },
	{ 0x39f5da0f, __VMLINUX_SYMBOL_STR(RTDebugFunc) },
	{ 0xdc62d666, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x20adc8cd, __VMLINUX_SYMBOL_STR(os_alloc_mem) },
	{ 0x8b94df38, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x7b793024, __VMLINUX_SYMBOL_STR(RTMPFreeNdisPacket) },
	{ 0xdc0accc3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf4997701, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtutil7601Uap,mt7601Uap";

MODULE_ALIAS("usb:v148Fp7650d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp6370d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp7601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2717p4106d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "88D67674596EB0AE1F25074");
