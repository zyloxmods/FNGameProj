#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BadNetworkIndicator.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, EditInlineNew, Config=Game)
class NETUI_API UBadNetworkIndicator : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialDelay;
    
public:
    UBadNetworkIndicator();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSeverePing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSeverePacketLoss() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBadPing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBadPacketLoss() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPacketLoss() const;
    
};

