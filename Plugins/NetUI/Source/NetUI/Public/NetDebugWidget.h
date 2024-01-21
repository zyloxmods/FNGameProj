#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NetDebugWidget.generated.h"

class UCommonTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class NETUI_API UNetDebugWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* PingUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* PacketInRateUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* PacketOutRateUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* PacketInLossUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* PacketOutLossUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* UpBandwidthUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* DownBandwidthUI;
    
public:
    UNetDebugWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void StopTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartTimer();
    
};

