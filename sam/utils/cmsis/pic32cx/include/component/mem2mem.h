/* ---------------------------------------------------------------------------- */
/*                Microchip Microcontroller Software Support                    */
/*                       SAM Software Package License                           */
/* ---------------------------------------------------------------------------- */
/* Copyright (c) 2022, Microchip Technology Inc.                    */
/*                                                                              */
/* All rights reserved.                                                         */
/*                                                                              */
/* Redistribution and use in source and binary forms, with or without           */
/* modification, are permitted provided that the following condition is met:    */
/*                                                                              */
/* - Redistributions of source code must retain the above copyright notice,     */
/* this list of conditions and the disclaimer below.                            */
/*                                                                              */
/* Microchip's name may not be used to endorse or promote products derived from */
/* this software without specific prior written permission.                     */
/*                                                                              */
/* DISCLAIMER:  THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS  */
/* OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES */
/* OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT    */
/* ARE DISCLAIMED. IN NO EVENT SHALL MICROCHIP BE LIABLE FOR ANY DIRECT,        */
/* INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES           */
/* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; */
/* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND  */
/* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT   */
/* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF     */
/* THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.            */
/* ---------------------------------------------------------------------------- */

#ifndef _PIC32CX_MEM2MEM_COMPONENT_
#define _PIC32CX_MEM2MEM_COMPONENT_

/* ============================================================================= */
/**  SOFTWARE API DEFINITION FOR Memory to Memory */
/* ============================================================================= */
/** \addtogroup PIC32CX_MEM2MEM Memory to Memory */
/*@{*/

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief Mem2mem hardware registers */
typedef struct {
  __IO uint32_t MEM2MEM_THR;   /**< \brief (Mem2mem Offset: 0x0) Transfer Holding Register */
  __IO uint32_t MEM2MEM_MR;    /**< \brief (Mem2mem Offset: 0x4) Mode Register */
  __O  uint32_t MEM2MEM_IER;   /**< \brief (Mem2mem Offset: 0x8) Interrupt Enable Register */
  __O  uint32_t MEM2MEM_IDR;   /**< \brief (Mem2mem Offset: 0xC) Interrupt Disable Register */
  __I  uint32_t MEM2MEM_IMR;   /**< \brief (Mem2mem Offset: 0x10) Interrupt Mask Register */
  __I  uint32_t MEM2MEM_ISR;   /**< \brief (Mem2mem Offset: 0x14) Interrupt Status Register */
  __IO uint32_t MEM2MEM_WPMR;  /**< \brief (Mem2mem Offset: 0x18) Write Protection Mode Register */
  __I  uint32_t Reserved1[57];
  __IO uint32_t MEM2MEM_RPR;   /**< \brief (Mem2mem Offset: 0x100) Receive Pointer Register */
  __IO uint32_t MEM2MEM_RCR;   /**< \brief (Mem2mem Offset: 0x104) Receive Counter Register */
  __IO uint32_t MEM2MEM_TPR;   /**< \brief (Mem2mem Offset: 0x108) Transmit Pointer Register */
  __IO uint32_t MEM2MEM_TCR;   /**< \brief (Mem2mem Offset: 0x10C) Transmit Counter Register */
  __IO uint32_t MEM2MEM_RNPR;  /**< \brief (Mem2mem Offset: 0x110) Receive Next Pointer Register */
  __IO uint32_t MEM2MEM_RNCR;  /**< \brief (Mem2mem Offset: 0x114) Receive Next Counter Register */
  __IO uint32_t MEM2MEM_TNPR;  /**< \brief (Mem2mem Offset: 0x118) Transmit Next Pointer Register */
  __IO uint32_t MEM2MEM_TNCR;  /**< \brief (Mem2mem Offset: 0x11C) Transmit Next Counter Register */
  __O  uint32_t MEM2MEM_PTCR;  /**< \brief (Mem2mem Offset: 0x120) Transfer Control Register */
  __I  uint32_t MEM2MEM_PTSR;  /**< \brief (Mem2mem Offset: 0x124) Transfer Status Register */
  __IO uint32_t MEM2MEM_PWPMR; /**< \brief (Mem2mem Offset: 0x128) Write Protection Mode Register */
} Mem2mem;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/* -------- MEM2MEM_THR : (MEM2MEM Offset: 0x0) Transfer Holding Register -------- */
#define MEM2MEM_THR_THDATA_Pos 0
#define MEM2MEM_THR_THDATA_Msk (0xffffffffu << MEM2MEM_THR_THDATA_Pos) /**< \brief (MEM2MEM_THR) Transfer Holding Data */
#define MEM2MEM_THR_THDATA(value) ((MEM2MEM_THR_THDATA_Msk & ((value) << MEM2MEM_THR_THDATA_Pos)))
/* -------- MEM2MEM_MR : (MEM2MEM Offset: 0x4) Mode Register -------- */
#define MEM2MEM_MR_TSIZE_Pos 0
#define MEM2MEM_MR_TSIZE_Msk (0x3u << MEM2MEM_MR_TSIZE_Pos) /**< \brief (MEM2MEM_MR) Transfer Size */
#define MEM2MEM_MR_TSIZE(value) ((MEM2MEM_MR_TSIZE_Msk & ((value) << MEM2MEM_MR_TSIZE_Pos)))
#define   MEM2MEM_MR_TSIZE_T_8BIT (0x0u << 0) /**< \brief (MEM2MEM_MR) The buffer size is defined in bytes. */
#define   MEM2MEM_MR_TSIZE_T_16BIT (0x1u << 0) /**< \brief (MEM2MEM_MR) The buffer size is defined in half-words (16-bit). */
#define   MEM2MEM_MR_TSIZE_T_32BIT (0x2u << 0) /**< \brief (MEM2MEM_MR) The buffer size is defined in words (32-bit). Default value. */
/* -------- MEM2MEM_IER : (MEM2MEM Offset: 0x8) Interrupt Enable Register -------- */
#define MEM2MEM_IER_RXEND (0x1u << 0) /**< \brief (MEM2MEM_IER) End of Transfer Interrupt Enable */
#define MEM2MEM_IER_RXBUFF (0x1u << 1) /**< \brief (MEM2MEM_IER) Buffer Full Interrupt Enable */
/* -------- MEM2MEM_IDR : (MEM2MEM Offset: 0xC) Interrupt Disable Register -------- */
#define MEM2MEM_IDR_RXEND (0x1u << 0) /**< \brief (MEM2MEM_IDR) End of Transfer Interrupt Disable */
#define MEM2MEM_IDR_RXBUFF (0x1u << 1) /**< \brief (MEM2MEM_IDR) Buffer Full Interrupt Disable */
/* -------- MEM2MEM_IMR : (MEM2MEM Offset: 0x10) Interrupt Mask Register -------- */
#define MEM2MEM_IMR_RXEND (0x1u << 0) /**< \brief (MEM2MEM_IMR) End of Transfer Interrupt Mask */
#define MEM2MEM_IMR_RXBUFF (0x1u << 1) /**< \brief (MEM2MEM_IMR) Buffer Full Interrupt Mask */
/* -------- MEM2MEM_ISR : (MEM2MEM Offset: 0x14) Interrupt Status Register -------- */
#define MEM2MEM_ISR_RXEND (0x1u << 0) /**< \brief (MEM2MEM_ISR) End of Transfer */
#define MEM2MEM_ISR_RXBUFF (0x1u << 1) /**< \brief (MEM2MEM_ISR) Buffer Full */
/* -------- MEM2MEM_WPMR : (MEM2MEM Offset: 0x18) Write Protection Mode Register -------- */
#define MEM2MEM_WPMR_WPEN (0x1u << 0) /**< \brief (MEM2MEM_WPMR) Write Protection Configuration Enable */
#define MEM2MEM_WPMR_WPITEN (0x1u << 1) /**< \brief (MEM2MEM_WPMR) Write Protection Interruption Enable */
#define MEM2MEM_WPMR_WPKEY_Pos 8
#define MEM2MEM_WPMR_WPKEY_Msk (0xffffffu << MEM2MEM_WPMR_WPKEY_Pos) /**< \brief (MEM2MEM_WPMR) Write Protection Key */
#define MEM2MEM_WPMR_WPKEY(value) ((MEM2MEM_WPMR_WPKEY_Msk & ((value) << MEM2MEM_WPMR_WPKEY_Pos)))
#define   MEM2MEM_WPMR_WPKEY_PASSWD (0x4D454Du << 8) /**< \brief (MEM2MEM_WPMR) Writing any other value in this field aborts the write operation of the WPEN, WPITEN bits. Always reads as 0. */
/* -------- MEM2MEM_RPR : (MEM2MEM Offset: 0x100) Receive Pointer Register -------- */
#define MEM2MEM_RPR_RXPTR_Pos 0
#define MEM2MEM_RPR_RXPTR_Msk (0xffffffffu << MEM2MEM_RPR_RXPTR_Pos) /**< \brief (MEM2MEM_RPR) Receive Pointer Register */
#define MEM2MEM_RPR_RXPTR(value) ((MEM2MEM_RPR_RXPTR_Msk & ((value) << MEM2MEM_RPR_RXPTR_Pos)))
/* -------- MEM2MEM_RCR : (MEM2MEM Offset: 0x104) Receive Counter Register -------- */
#define MEM2MEM_RCR_RXCTR_Pos 0
#define MEM2MEM_RCR_RXCTR_Msk (0xffffu << MEM2MEM_RCR_RXCTR_Pos) /**< \brief (MEM2MEM_RCR) Receive Counter Register */
#define MEM2MEM_RCR_RXCTR(value) ((MEM2MEM_RCR_RXCTR_Msk & ((value) << MEM2MEM_RCR_RXCTR_Pos)))
/* -------- MEM2MEM_TPR : (MEM2MEM Offset: 0x108) Transmit Pointer Register -------- */
#define MEM2MEM_TPR_TXPTR_Pos 0
#define MEM2MEM_TPR_TXPTR_Msk (0xffffffffu << MEM2MEM_TPR_TXPTR_Pos) /**< \brief (MEM2MEM_TPR) Transmit Counter Register */
#define MEM2MEM_TPR_TXPTR(value) ((MEM2MEM_TPR_TXPTR_Msk & ((value) << MEM2MEM_TPR_TXPTR_Pos)))
/* -------- MEM2MEM_TCR : (MEM2MEM Offset: 0x10C) Transmit Counter Register -------- */
#define MEM2MEM_TCR_TXCTR_Pos 0
#define MEM2MEM_TCR_TXCTR_Msk (0xffffu << MEM2MEM_TCR_TXCTR_Pos) /**< \brief (MEM2MEM_TCR) Transmit Counter Register */
#define MEM2MEM_TCR_TXCTR(value) ((MEM2MEM_TCR_TXCTR_Msk & ((value) << MEM2MEM_TCR_TXCTR_Pos)))
/* -------- MEM2MEM_RNPR : (MEM2MEM Offset: 0x110) Receive Next Pointer Register -------- */
#define MEM2MEM_RNPR_RXNPTR_Pos 0
#define MEM2MEM_RNPR_RXNPTR_Msk (0xffffffffu << MEM2MEM_RNPR_RXNPTR_Pos) /**< \brief (MEM2MEM_RNPR) Receive Next Pointer */
#define MEM2MEM_RNPR_RXNPTR(value) ((MEM2MEM_RNPR_RXNPTR_Msk & ((value) << MEM2MEM_RNPR_RXNPTR_Pos)))
/* -------- MEM2MEM_RNCR : (MEM2MEM Offset: 0x114) Receive Next Counter Register -------- */
#define MEM2MEM_RNCR_RXNCTR_Pos 0
#define MEM2MEM_RNCR_RXNCTR_Msk (0xffffu << MEM2MEM_RNCR_RXNCTR_Pos) /**< \brief (MEM2MEM_RNCR) Receive Next Counter */
#define MEM2MEM_RNCR_RXNCTR(value) ((MEM2MEM_RNCR_RXNCTR_Msk & ((value) << MEM2MEM_RNCR_RXNCTR_Pos)))
/* -------- MEM2MEM_TNPR : (MEM2MEM Offset: 0x118) Transmit Next Pointer Register -------- */
#define MEM2MEM_TNPR_TXNPTR_Pos 0
#define MEM2MEM_TNPR_TXNPTR_Msk (0xffffffffu << MEM2MEM_TNPR_TXNPTR_Pos) /**< \brief (MEM2MEM_TNPR) Transmit Next Pointer */
#define MEM2MEM_TNPR_TXNPTR(value) ((MEM2MEM_TNPR_TXNPTR_Msk & ((value) << MEM2MEM_TNPR_TXNPTR_Pos)))
/* -------- MEM2MEM_TNCR : (MEM2MEM Offset: 0x11C) Transmit Next Counter Register -------- */
#define MEM2MEM_TNCR_TXNCTR_Pos 0
#define MEM2MEM_TNCR_TXNCTR_Msk (0xffffu << MEM2MEM_TNCR_TXNCTR_Pos) /**< \brief (MEM2MEM_TNCR) Transmit Counter Next */
#define MEM2MEM_TNCR_TXNCTR(value) ((MEM2MEM_TNCR_TXNCTR_Msk & ((value) << MEM2MEM_TNCR_TXNCTR_Pos)))
/* -------- MEM2MEM_PTCR : (MEM2MEM Offset: 0x120) Transfer Control Register -------- */
#define MEM2MEM_PTCR_RXTEN (0x1u << 0) /**< \brief (MEM2MEM_PTCR) Receiver Transfer Enable */
#define MEM2MEM_PTCR_RXTDIS (0x1u << 1) /**< \brief (MEM2MEM_PTCR) Receiver Transfer Disable */
#define MEM2MEM_PTCR_TXTEN (0x1u << 8) /**< \brief (MEM2MEM_PTCR) Transmitter Transfer Enable */
#define MEM2MEM_PTCR_TXTDIS (0x1u << 9) /**< \brief (MEM2MEM_PTCR) Transmitter Transfer Disable */
#define MEM2MEM_PTCR_RXCBEN (0x1u << 16) /**< \brief (MEM2MEM_PTCR) Receiver Circular Buffer Enable */
#define MEM2MEM_PTCR_RXCBDIS (0x1u << 17) /**< \brief (MEM2MEM_PTCR) Receiver Circular Buffer Disable */
#define MEM2MEM_PTCR_TXCBEN (0x1u << 18) /**< \brief (MEM2MEM_PTCR) Transmitter Circular Buffer Enable */
#define MEM2MEM_PTCR_TXCBDIS (0x1u << 19) /**< \brief (MEM2MEM_PTCR) Transmitter Circular Buffer Disable */
#define MEM2MEM_PTCR_ERRCLR (0x1u << 24) /**< \brief (MEM2MEM_PTCR) Transfer Bus Error Clear */
/* -------- MEM2MEM_PTSR : (MEM2MEM Offset: 0x124) Transfer Status Register -------- */
#define MEM2MEM_PTSR_RXTEN (0x1u << 0) /**< \brief (MEM2MEM_PTSR) Receiver Transfer Enable */
#define MEM2MEM_PTSR_TXTEN (0x1u << 8) /**< \brief (MEM2MEM_PTSR) Transmitter Transfer Enable */
#define MEM2MEM_PTSR_RXCBEN (0x1u << 16) /**< \brief (MEM2MEM_PTSR) Receiver Circular Buffer Enable */
#define MEM2MEM_PTSR_TXCBEN (0x1u << 18) /**< \brief (MEM2MEM_PTSR) Transmitter Circular Buffer Enable */
#define MEM2MEM_PTSR_ERR (0x1u << 24) /**< \brief (MEM2MEM_PTSR) Transfer Bus Error */
/* -------- MEM2MEM_PWPMR : (MEM2MEM Offset: 0x128) Write Protection Mode Register -------- */
#define MEM2MEM_PWPMR_WPPTREN (0x1u << 0) /**< \brief (MEM2MEM_PWPMR) Write Protection Pointer Registers Enable */
#define MEM2MEM_PWPMR_WPCTREN (0x1u << 1) /**< \brief (MEM2MEM_PWPMR) Write Protection Counter Registers Enable */
#define MEM2MEM_PWPMR_WPCREN (0x1u << 2) /**< \brief (MEM2MEM_PWPMR) Write Protection Control Register Enable */
#define MEM2MEM_PWPMR_WPKEY_Pos 8
#define MEM2MEM_PWPMR_WPKEY_Msk (0xffffffu << MEM2MEM_PWPMR_WPKEY_Pos) /**< \brief (MEM2MEM_PWPMR) Write Protection Key */
#define MEM2MEM_PWPMR_WPKEY(value) ((MEM2MEM_PWPMR_WPKEY_Msk & ((value) << MEM2MEM_PWPMR_WPKEY_Pos)))
#define   MEM2MEM_PWPMR_WPKEY_PASSWD (0x504443u << 8) /**< \brief (MEM2MEM_PWPMR) Writing any other value in this field aborts the write operation. Always reads as 0. */

/*@}*/


#endif /* _PIC32CX_MEM2MEM_COMPONENT_ */
