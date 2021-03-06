/*!
    \file  gd32f3x0_dma.h
    \brief definitions for the DMA
*/

/*
    Copyright (C) 2017 GigaDevice

    2017-06-06, V1.0.0, firmware for GD32F3x0
*/

#ifndef GD32F3X0_DMA_H
#define GD32F3X0_DMA_H

#include "gd32f3x0.h"

/* DMA definitions */
#define DMA                               DMA_BASE              /*!< DMA base address */

/* registers definitions */
#define DMA_INTF                          REG32(DMA + 0x00U)    /*!< DMA interrupt flag register */
#define DMA_INTC                          REG32(DMA + 0x04U)    /*!< DMA interrupt flag clear register */
#define DMA_CH0CTL                        REG32(DMA + 0x08U)    /*!< DMA channel 0 control register */
#define DMA_CH0CNT                        REG32(DMA + 0x0CU)    /*!< DMA channel 0 counter register */
#define DMA_CH0PADDR                      REG32(DMA + 0x10U)    /*!< DMA channel 0 peripheral base address register */
#define DMA_CH0MADDR                      REG32(DMA + 0x14U)    /*!< DMA channel 0 memory base address register */
#define DMA_CH1CTL                        REG32(DMA + 0x1CU)    /*!< DMA channel 1 control register */
#define DMA_CH1CNT                        REG32(DMA + 0x20U)    /*!< DMA channel 1 counter register */
#define DMA_CH1PADDR                      REG32(DMA + 0x24U)    /*!< DMA channel 1 peripheral base address register */
#define DMA_CH1MADDR                      REG32(DMA + 0x28U)    /*!< DMA channel 1 memory base address register */
#define DMA_CH2CTL                        REG32(DMA + 0x30U)    /*!< DMA channel 2 control register */
#define DMA_CH2CNT                        REG32(DMA + 0x34U)    /*!< DMA channel 2 counter register */
#define DMA_CH2PADDR                      REG32(DMA + 0x38U)    /*!< DMA channel 2 peripheral base address register */
#define DMA_CH2MADDR                      REG32(DMA + 0x3CU)    /*!< DMA channel 2 memory base address register */
#define DMA_CH3CTL                        REG32(DMA + 0x44U)    /*!< DMA channel 3 control register */
#define DMA_CH3CNT                        REG32(DMA + 0x48U)    /*!< DMA channel 3 counter register */
#define DMA_CH3PADDR                      REG32(DMA + 0x4CU)    /*!< DMA channel 3 peripheral base address register */
#define DMA_CH3MADDR                      REG32(DMA + 0x50U)    /*!< DMA channel 3 memory base address register */
#define DMA_CH4CTL                        REG32(DMA + 0x58U)    /*!< DMA channel 4 control register */
#define DMA_CH4CNT                        REG32(DMA + 0x5CU)    /*!< DMA channel 4 counter register */
#define DMA_CH4PADDR                      REG32(DMA + 0x60U)    /*!< DMA channel 4 peripheral base address register */
#define DMA_CH4MADDR                      REG32(DMA + 0x64U)    /*!< DMA channel 4 memory base address register */
#define DMA_CH5CTL                        REG32(DMA + 0x6CU)    /*!< DMA channel 5 control register */
#define DMA_CH5CNT                        REG32(DMA + 0x70U)    /*!< DMA channel 5 counter register */
#define DMA_CH5PADDR                      REG32(DMA + 0x74U)    /*!< DMA channel 5 peripheral base address register */
#define DMA_CH5MADDR                      REG32(DMA + 0x78U)    /*!< DMA channel 5 memory base address register */
#define DMA_CH6CTL                        REG32(DMA + 0x80U)    /*!< DMA channel 6 control register */
#define DMA_CH6CNT                        REG32(DMA + 0x84U)    /*!< DMA channel 6 counter register */
#define DMA_CH6PADDR                      REG32(DMA + 0x88U)    /*!< DMA channel 6 peripheral base address register */
#define DMA_CH6MADDR                      REG32(DMA + 0x8CU)    /*!< DMA channel 6 memory base address register */

/* bits definitions */
/* DMA_INTF */
#define DMA_INTF_GIF                      BIT(0)                /*!< global interrupt flag of channel */
#define DMA_INTF_FTFIF                    BIT(1)                /*!< full transfer finish flag of channel */
#define DMA_INTF_HTFIF                    BIT(2)                /*!< half transfer finish flag of channel */
#define DMA_INTF_ERRIF                    BIT(3)                /*!< error flag of channel */

/* DMA_INTC */
#define DMA_INTC_GIFC                     BIT(0)                /*!< clear global interrupt flag of channel */
#define DMA_INTC_FTFIFC                   BIT(1)                /*!< clear transfer finish flag of channel */
#define DMA_INTC_HTFIFC                   BIT(2)                /*!< clear half transfer finish flag of channel */
#define DMA_INTC_ERRIFC                   BIT(3)                /*!< clear error flag of channel */

/* DMA_CHxCTL,x=0..6 */
#define DMA_CHXCTL_CHEN                   BIT(0)                /*!< channel x enable */
#define DMA_CHXCTL_FTFIE                  BIT(1)                /*!< enable bit for channel x transfer complete interrupt */
#define DMA_CHXCTL_HTFIE                  BIT(2)                /*!< enable bit for channel x transfer half complete interrupt */
#define DMA_CHXCTL_ERRIE                  BIT(3)                /*!< enable bit for channel x error interrupt */
#define DMA_CHXCTL_DIR                    BIT(4)                /*!< direction of the data transfer on the channel */
#define DMA_CHXCTL_CMEN                   BIT(5)                /*!< circulation mode */
#define DMA_CHXCTL_PNAGA                  BIT(6)                /*!< next address generation algorithm of peripheral */
#define DMA_CHXCTL_MNAGA                  BIT(7)                /*!< next address generation algorithm of memory */
#define DMA_CHXCTL_PWIDTH                 BITS(8,9)             /*!< transfer data size of peripheral */
#define DMA_CHXCTL_MWIDTH                 BITS(10,11)           /*!< transfer data size of memory */
#define DMA_CHXCTL_PRIO                   BITS(12,13)           /*!< priority level of channelx */
#define DMA_CHXCTL_M2M                    BIT(14)               /*!< memory to memory mode */

/* DMA_CHxCNT,x=0..6 */
#define DMA_CHXCNT_CNT                    BITS(0,15)            /*!< transfer counter */

/* DMA_CHxPADDR,x=0..6 */
#define DMA_CHXPADDR_PADDR                BITS(0,31)            /*!< peripheral base address */

/* DMA_CHxMADDR,x=0..6 */
#define DMA_CHXMADDR_MADDR                BITS(0,31)            /*!< memory base address */

/* constants definitions */
/* DMA channel select */
typedef enum 
{
    DMA_CH0 = 0,                          /*!< DMA Channel0 */
    DMA_CH1,                              /*!< DMA Channel1 */ 
    DMA_CH2,                              /*!< DMA Channel2 */ 
    DMA_CH3,                              /*!< DMA Channel3 */ 
    DMA_CH4,                              /*!< DMA Channel4 */ 
    DMA_CH5,                              /*!< DMA Channel5 */ 
    DMA_CH6                               /*!< DMA Channel6 */
} dma_channel_enum;

/* DMA initialize struct */
typedef struct
{
    uint32_t periph_addr;                 /*!< peripheral base address */
    uint32_t periph_width;                /*!< transfer data size of peripheral */
    uint8_t periph_inc;                   /*!< peripheral increasing mode */
    uint32_t memory_addr;                 /*!< memory base address */
    uint32_t memory_width;                /*!< transfer data size of memory */
    uint8_t memory_inc;                   /*!< memory increasing mode */
    uint8_t direction;                    /*!< channel data transfer direction */
    uint32_t number;                      /*!< channel transfer number */
    uint32_t priority;                    /*!< channel priority level */
} dma_parameter_struct;

/* DMA reset value */
#define DMA_CHCTL_RESET_VALUE             ((uint32_t)0x00000000U)                         /*!< the reset value of DMA channel CHXCTL register */
#define DMA_CHCNT_RESET_VALUE             ((uint32_t)0x00000000U)                         /*!< the reset value of DMA channel CHXCNT register */
#define DMA_CHPADDR_RESET_VALUE           ((uint32_t)0x00000000U)                         /*!< the reset value of DMA channel CHXPADDR register */
#define DMA_CHMADDR_RESET_VALUE           ((uint32_t)0x00000000U)                         /*!< the reset value of DMA channel CHXMADDR register */
#define DMA_CHINTF_RESET_VALUE            (DMA_INTF_GIF | DMA_INTF_FTFIF | \
                                           DMA_INTF_HTFIF | DMA_INTF_ERRIF)

#define DMA_FLAG_ADD(flag,shift)          ((flag) << ((uint32_t)(shift) * 4U))            /*!< DMA channel flag shift */

/* DMA_CHCTL base address */
#define DMA_CHXCTL_BASE                   (DMA + 0x08U)                                   /*!< the base address of DMA channel CHXCTL register */
#define DMA_CHXCNT_BASE                   (DMA + 0x0CU)                                   /*!< the base address of DMA channel CHXCNT register */
#define DMA_CHXPADDR_BASE                 (DMA + 0x10U)                                   /*!< the base address of DMA channel CHXPADDR register */
#define DMA_CHXMADDR_BASE                 (DMA + 0x14U)                                   /*!< the base address of DMA channel CHXMADDR register */

/* DMA channel shift bit */
#define DMA_CHCTL(channel)                REG32(DMA_CHXCTL_BASE + 0x14U * (uint32_t)(channel))         /*!< the address of DMA channel CHXCTL register */
#define DMA_CHCNT(channel)                REG32(DMA_CHXCNT_BASE + 0x14U * (uint32_t)(channel))         /*!< the address of DMA channel CHXCNT register */
#define DMA_CHPADDR(channel)              REG32(DMA_CHXPADDR_BASE + 0x14U * (uint32_t)(channel))       /*!< the address of DMA channel CHXPADDR register */
#define DMA_CHMADDR(channel)              REG32(DMA_CHXMADDR_BASE + 0x14U * (uint32_t)(channel))       /*!< the address of DMA channel CHXMADDR register */

/* DMA_INTF register */
/* interrupt flag bits */
#define DMA_INT_FLAG_G                    DMA_INTF_GIF                                    /*!< global interrupt flag of channel */
#define DMA_INT_FLAG_FTF                  DMA_INTF_FTFIF                                  /*!< full transfer finish interrupt flag of channel */
#define DMA_INT_FLAG_HTF                  DMA_INTF_HTFIF                                  /*!< half transfer finish interrupt flag of channel */
#define DMA_INT_FLAG_ERR                  DMA_INTF_ERRIF                                  /*!< error interrupt flag of channel */

/* flag bits */
#define DMA_FLAG_G                        DMA_INTF_GIF                                    /*!< global interrupt flag of channel */
#define DMA_FLAG_FTF                      DMA_INTF_FTFIF                                  /*!< full transfer finish flag of channel */
#define DMA_FLAG_HTF                      DMA_INTF_HTFIF                                  /*!< half transfer finish flag of channel */
#define DMA_FLAG_ERR                      DMA_INTF_ERRIF                                  /*!< error flag of channel */

/* DMA_CHxCTL register */
/* interrupt enable bits */
#define DMA_INT_FTF                       DMA_CHXCTL_FTFIE                                /*!< enable bit for channel full transfer finish interrupt */
#define DMA_INT_HTF                       DMA_CHXCTL_HTFIE                                /*!< enable bit for channel half transfer finish interrupt */
#define DMA_INT_ERR                       DMA_CHXCTL_ERRIE                                /*!< enable bit for channel error interrupt */

/* transfer direction */
#define DMA_PERIPHERAL_TO_MEMORY          ((uint32_t)0x00000000U)                         /*!< read from peripheral and write to memory */
#define DMA_MEMORY_TO_PERIPHERAL          ((uint32_t)0x00000001U)                         /*!< read from memory and write to peripheral */

/* peripheral increasing mode */
#define DMA_PERIPH_INCREASE_DISABLE       ((uint32_t)0x00000000U)                         /*!< next address of peripheral is fixed address mode */
#define DMA_PERIPH_INCREASE_ENABLE        ((uint32_t)0x00000001U)                         /*!< next address of peripheral is increasing address mode */

/* memory increasing mode */
#define DMA_MEMORY_INCREASE_DISABLE       ((uint32_t)0x00000000U)                         /*!< next address of memory is fixed address mode */
#define DMA_MEMORY_INCREASE_ENABLE        ((uint32_t)0x00000001U)                         /*!< next address of memory is increasing address mode */

/* transfer data size of peripheral */
#define CHCTL_PWIDTH(regval)              (BITS(8,9) & ((regval) << 8))                   /*!< transfer data size of peripheral */
#define DMA_PERIPHERAL_WIDTH_8BIT         CHCTL_PWIDTH(0)                                 /*!< transfer data size of peripheral is 8-bit */
#define DMA_PERIPHERAL_WIDTH_16BIT        CHCTL_PWIDTH(1)                                 /*!< transfer data size of peripheral is 16-bit */
#define DMA_PERIPHERAL_WIDTH_32BIT        CHCTL_PWIDTH(2)                                 /*!< transfer data size of peripheral is 32-bit */

/* transfer data size of memory */
#define CHCTL_MWIDTH(regval)              (BITS(10,11) & ((regval) << 10))                /*!< transfer data size of memory */
#define DMA_MEMORY_WIDTH_8BIT             CHCTL_MWIDTH(0)                                 /*!< transfer data size of memory is 8-bit */
#define DMA_MEMORY_WIDTH_16BIT            CHCTL_MWIDTH(1)                                 /*!< transfer data size of memory is 16-bit */
#define DMA_MEMORY_WIDTH_32BIT            CHCTL_MWIDTH(2)                                 /*!< transfer data size of memory is 32-bit */

/* channel priority level */
#define CHCTL_PRIO(regval)                (BITS(12,13) & ((regval) << 12))                /*!< DMA channel priority level */
#define DMA_PRIORITY_LOW                  CHCTL_PRIO(0)                                   /*!< low priority */
#define DMA_PRIORITY_MEDIUM               CHCTL_PRIO(1)                                   /*!< medium priority */
#define DMA_PRIORITY_HIGH                 CHCTL_PRIO(2)                                   /*!< high priority */
#define DMA_PRIORITY_ULTRA_HIGH           CHCTL_PRIO(3)                                   /*!< ultra high priority */

/* DMA_CHxCNT register */
/* transfer counter */
#define DMA_CHANNEL_CNT_MASK              DMA_CHXCNT_CNT                    

#endif /* GD32F3X0_DMA_H */
