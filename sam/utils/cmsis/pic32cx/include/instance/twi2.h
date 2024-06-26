/**
 * \file
 *
 * Copyright (c) 2022 Microchip Technology Inc. and its subsidiaries.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Subject to your compliance with these terms, you may use Microchip
 * software and any derivatives exclusively with Microchip products.
 * It is your responsibility to comply with third party license terms applicable
 * to your use of third party software (including open source software) that
 * may accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES,
 * WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE,
 * INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY,
 * AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP BE
 * LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE
 * SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE
 * POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY
 * RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
 * THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * \asf_license_stop
 *
 */
/*
 * Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
 */

#ifndef _PIC32CX_TWI2_INSTANCE_
#define _PIC32CX_TWI2_INSTANCE_

/* ========== Register definition for TWI2 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
  #define REG_TWI2_CR                     (0x40008600U) /**< \brief (TWI2) Control Register */
  #define REG_TWI2_MMR                    (0x40008604U) /**< \brief (TWI2) Master Mode Register */
  #define REG_TWI2_SMR                    (0x40008608U) /**< \brief (TWI2) Slave Mode Register */
  #define REG_TWI2_IADR                   (0x4000860CU) /**< \brief (TWI2) Internal Address Register */
  #define REG_TWI2_CWGR                   (0x40008610U) /**< \brief (TWI2) Clock Waveform Generator Register */
  #define REG_TWI2_SR                     (0x40008620U) /**< \brief (TWI2) Status Register */
  #define REG_TWI2_IER                    (0x40008624U) /**< \brief (TWI2) Interrupt Enable Register */
  #define REG_TWI2_IDR                    (0x40008628U) /**< \brief (TWI2) Interrupt Disable Register */
  #define REG_TWI2_IMR                    (0x4000862CU) /**< \brief (TWI2) Interrupt Mask Register */
  #define REG_TWI2_RHR                    (0x40008630U) /**< \brief (TWI2) Receive Holding Register */
  #define REG_TWI2_THR                    (0x40008634U) /**< \brief (TWI2) Transmit Holding Register */
  #define REG_TWI2_SMBTR                  (0x40008638U) /**< \brief (TWI2) SMBus Timing Register */
  #define REG_TWI2_ACR                    (0x40008640U) /**< \brief (TWI2) Alternative Command Register */
  #define REG_TWI2_FILTR                  (0x40008644U) /**< \brief (TWI2) Filter Register */
  #define REG_TWI2_SWMR                   (0x4000864CU) /**< \brief (TWI2) SleepWalking Matching Register */
  #define REG_TWI2_FMR                    (0x40008650U) /**< \brief (TWI2) FIFO Mode Register */
  #define REG_TWI2_FLR                    (0x40008654U) /**< \brief (TWI2) FIFO Level Register */
  #define REG_TWI2_FSR                    (0x40008660U) /**< \brief (TWI2) FIFO Status Register */
  #define REG_TWI2_FIER                   (0x40008664U) /**< \brief (TWI2) FIFO Interrupt Enable Register */
  #define REG_TWI2_FIDR                   (0x40008668U) /**< \brief (TWI2) FIFO Interrupt Disable Register */
  #define REG_TWI2_FIMR                   (0x4000866CU) /**< \brief (TWI2) FIFO Interrupt Mask Register */
  #define REG_TWI2_DR                     (0x400086D0U) /**< \brief (TWI2) Debug Register */
  #define REG_TWI2_WPMR                   (0x400086E4U) /**< \brief (TWI2) Write Protection Mode Register */
  #define REG_TWI2_WPSR                   (0x400086E8U) /**< \brief (TWI2) Write Protection Status Register */
  #define REG_TWI2_RPR                    (0x40008700U) /**< \brief (TWI2) Receive Pointer Register */
  #define REG_TWI2_RCR                    (0x40008704U) /**< \brief (TWI2) Receive Counter Register */
  #define REG_TWI2_TPR                    (0x40008708U) /**< \brief (TWI2) Transmit Pointer Register */
  #define REG_TWI2_TCR                    (0x4000870CU) /**< \brief (TWI2) Transmit Counter Register */
  #define REG_TWI2_RNPR                   (0x40008710U) /**< \brief (TWI2) Receive Next Pointer Register */
  #define REG_TWI2_RNCR                   (0x40008714U) /**< \brief (TWI2) Receive Next Counter Register */
  #define REG_TWI2_TNPR                   (0x40008718U) /**< \brief (TWI2) Transmit Next Pointer Register */
  #define REG_TWI2_TNCR                   (0x4000871CU) /**< \brief (TWI2) Transmit Next Counter Register */
  #define REG_TWI2_PTCR                   (0x40008720U) /**< \brief (TWI2) Transfer Control Register */
  #define REG_TWI2_PTSR                   (0x40008724U) /**< \brief (TWI2) Transfer Status Register */
#else
  #define REG_TWI2_CR    (*(__O  uint32_t*)0x40008600U) /**< \brief (TWI2) Control Register */
  #define REG_TWI2_MMR   (*(__IO uint32_t*)0x40008604U) /**< \brief (TWI2) Master Mode Register */
  #define REG_TWI2_SMR   (*(__IO uint32_t*)0x40008608U) /**< \brief (TWI2) Slave Mode Register */
  #define REG_TWI2_IADR  (*(__IO uint32_t*)0x4000860CU) /**< \brief (TWI2) Internal Address Register */
  #define REG_TWI2_CWGR  (*(__IO uint32_t*)0x40008610U) /**< \brief (TWI2) Clock Waveform Generator Register */
  #define REG_TWI2_SR    (*(__I  uint32_t*)0x40008620U) /**< \brief (TWI2) Status Register */
  #define REG_TWI2_IER   (*(__O  uint32_t*)0x40008624U) /**< \brief (TWI2) Interrupt Enable Register */
  #define REG_TWI2_IDR   (*(__O  uint32_t*)0x40008628U) /**< \brief (TWI2) Interrupt Disable Register */
  #define REG_TWI2_IMR   (*(__I  uint32_t*)0x4000862CU) /**< \brief (TWI2) Interrupt Mask Register */
  #define REG_TWI2_RHR   (*(__I  uint32_t*)0x40008630U) /**< \brief (TWI2) Receive Holding Register */
  #define REG_TWI2_THR   (*(__O  uint32_t*)0x40008634U) /**< \brief (TWI2) Transmit Holding Register */
  #define REG_TWI2_SMBTR (*(__IO uint32_t*)0x40008638U) /**< \brief (TWI2) SMBus Timing Register */
  #define REG_TWI2_ACR   (*(__IO uint32_t*)0x40008640U) /**< \brief (TWI2) Alternative Command Register */
  #define REG_TWI2_FILTR (*(__IO uint32_t*)0x40008644U) /**< \brief (TWI2) Filter Register */
  #define REG_TWI2_SWMR  (*(__IO uint32_t*)0x4000864CU) /**< \brief (TWI2) SleepWalking Matching Register */
  #define REG_TWI2_FMR   (*(__IO uint32_t*)0x40008650U) /**< \brief (TWI2) FIFO Mode Register */
  #define REG_TWI2_FLR   (*(__I  uint32_t*)0x40008654U) /**< \brief (TWI2) FIFO Level Register */
  #define REG_TWI2_FSR   (*(__I  uint32_t*)0x40008660U) /**< \brief (TWI2) FIFO Status Register */
  #define REG_TWI2_FIER  (*(__O  uint32_t*)0x40008664U) /**< \brief (TWI2) FIFO Interrupt Enable Register */
  #define REG_TWI2_FIDR  (*(__O  uint32_t*)0x40008668U) /**< \brief (TWI2) FIFO Interrupt Disable Register */
  #define REG_TWI2_FIMR  (*(__I  uint32_t*)0x4000866CU) /**< \brief (TWI2) FIFO Interrupt Mask Register */
  #define REG_TWI2_DR    (*(__I  uint32_t*)0x400086D0U) /**< \brief (TWI2) Debug Register */
  #define REG_TWI2_WPMR  (*(__IO uint32_t*)0x400086E4U) /**< \brief (TWI2) Write Protection Mode Register */
  #define REG_TWI2_WPSR  (*(__I  uint32_t*)0x400086E8U) /**< \brief (TWI2) Write Protection Status Register */
  #define REG_TWI2_RPR   (*(__IO uint32_t*)0x40008700U) /**< \brief (TWI2) Receive Pointer Register */
  #define REG_TWI2_RCR   (*(__IO uint32_t*)0x40008704U) /**< \brief (TWI2) Receive Counter Register */
  #define REG_TWI2_TPR   (*(__IO uint32_t*)0x40008708U) /**< \brief (TWI2) Transmit Pointer Register */
  #define REG_TWI2_TCR   (*(__IO uint32_t*)0x4000870CU) /**< \brief (TWI2) Transmit Counter Register */
  #define REG_TWI2_RNPR  (*(__IO uint32_t*)0x40008710U) /**< \brief (TWI2) Receive Next Pointer Register */
  #define REG_TWI2_RNCR  (*(__IO uint32_t*)0x40008714U) /**< \brief (TWI2) Receive Next Counter Register */
  #define REG_TWI2_TNPR  (*(__IO uint32_t*)0x40008718U) /**< \brief (TWI2) Transmit Next Pointer Register */
  #define REG_TWI2_TNCR  (*(__IO uint32_t*)0x4000871CU) /**< \brief (TWI2) Transmit Next Counter Register */
  #define REG_TWI2_PTCR  (*(__O  uint32_t*)0x40008720U) /**< \brief (TWI2) Transfer Control Register */
  #define REG_TWI2_PTSR  (*(__I  uint32_t*)0x40008724U) /**< \brief (TWI2) Transfer Status Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _PIC32CX_TWI2_INSTANCE_ */
