SRC_URI += "file://81xx_patches/0001-serial-amba-pl011-thunderx-cn81xx-adding-workaround-.patch"
SRC_URI += "file://81xx_patches/0002-net-thunderx-Introduce-a-mailbox-message-to-reset-VF.patch"
SRC_URI += "file://81xx_patches/0003-net-thunderx-Add-multiqset-support-for-dataplane-app.patch"
SRC_URI += "file://81xx_patches/0004-net-thunderx-add-sysfs-attribute-for-SQS-SVF-assigme.patch"
SRC_URI += "file://81xx_patches/0005-net-thunderx-Improvement-for-MBX-interface-debug-mes.patch"
SRC_URI += "file://81xx_patches/0006-net-thunderx-Fixing-race-condition-for-MBX-response.patch"
SRC_URI += "file://81xx_patches/0007-net-thunderx-Don-t-set-mac-address-for-secondary-Qse.patch"
SRC_URI += "file://81xx_patches/0008-net-thunderx-Fix-TL4-configuration-for-secondary-Qse.patch"
SRC_URI += "file://81xx_patches/0009-net-thunderx-Moved-HW-capability-info-from-macros-to.patch"
SRC_URI += "file://81xx_patches/0010-net-thunderx-Add-VNIC-s-PCI-devid-on-future-chips.patch"
SRC_URI += "file://81xx_patches/0011-net-thunderx-Add-support-for-81xx-and-83xx-chips.patch"
SRC_URI += "file://81xx_patches/0012-net-thunderx-Restrict-queue-count-to-number-of-cpus.patch"
SRC_URI += "file://81xx_patches/0013-net-thunderx-CQE_RX2_S-is-always-enabled-on-future-c.patch"
SRC_URI += "file://81xx_patches/0014-net-thunderx-Enable-PF-mailbox-irq-based-on-number-o.patch"
SRC_URI += "file://81xx_patches/0015-net-thunderx-Support-for-different-LMAC-types-within.patch"
SRC_URI += "file://81xx_patches/0016-net-thunderx-Add-BGX-support-for-81xx-soc.patch"
SRC_URI += "file://81xx_patches/0017-net-thunderx-Fixed-setting-olmac-s-lane-to-serdes-va.patch"
SRC_URI += "file://81xx_patches/0018-net-thunderx-Fixed-88xx-LMAC-config-corruption.patch"
SRC_URI += "file://81xx_patches/0019-iommu-arm-smmu-v2-fixed-minor-bug-of-previous-commit.patch"
SRC_URI += "file://81xx_patches/0020-net-thunderx-Add-QSGMII-support.patch"
SRC_URI += "file://81xx_patches/0021-net-thunderx-Make-silicon-revision-checks-specific-t.patch"
SRC_URI += "file://81xx_patches/0022-net-thunderx-Use-standard-API-to-get-msix-vector-cou.patch"
#SRC_URI += "file://81xx_patches/0023-net-thunjderx-Add-debug-to-print-numVFs-from-HW.patch"
#SRC_URI += "file://81xx_patches/0024-arm64-prefetch-enable-ARM64_HAS_NO_HW_PREFETCH-for-t.patch"
SRC_URI += "file://81xx_patches/0025-net-thunderx-Restrict-TNS_BYPASS-config-to-88xx.patch"
#SRC_URI += "file://81xx_patches/0026-Revert-arm64-prefetch-enable-ARM64_HAS_NO_HW_PREFETC.patch"
SRC_URI += "file://81xx_patches/0027-net-thunderx-Don-t-enable-multiqset-on-81xx.patch"
SRC_URI += "file://81xx_patches/0028-arm64-Enable-workaround-for-Cavium-erratum-27456-for.patch"
SRC_URI += "file://81xx_patches/0029-net-thunderx-Firmware-now-configures-LMAC0-2-instead.patch"
SRC_URI += "file://81xx_patches/0030-net-Add-driver-for-Marvell-88X3120-dual-10GBase-T-Et.patch"
SRC_URI += "file://81xx_patches/0031-net-thunderx-Fix-BGX-s-QSGMII-mode-configuration.patch"
SRC_URI += "file://81xx_patches/0032-Revert-net-thunderx-Fix-BGX-s-QSGMII-mode-configurat.patch"
SRC_URI += "file://81xx_patches/0033-net-thunderx-Fix-BGX-s-QSGMII-mode-lane-to-serdes-co.patch"
SRC_URI += "file://81xx_patches/0034-net-thunderx-Added-RGX-RGMII-interface-support.patch"
SRC_URI += "file://81xx_patches/0035-net-thunderx-Fix-for-spurious-mailbox-interrupt.patch"
SRC_URI += "file://81xx_patches/0036-net-thunderx-Use-netdev-s-name-for-naming-VF-s-inter.patch"
SRC_URI += "file://81xx_patches/0037-mmc-thunderx-Adding-thunderx-mmc-host-driver-support.patch"
SRC_URI += "file://81xx_patches/0038-net-thunderx-Fix-88xx-pass2-silicon-check.patch"
SRC_URI += "file://81xx_patches/0039-net-thunderx-Use-skb_add_rx_frag-for-split-buffer-Rx.patch"