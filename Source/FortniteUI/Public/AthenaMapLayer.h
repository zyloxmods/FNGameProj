#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "AthenaMapLayer.generated.h"

class ULocalPlayer;

UCLASS(Blueprintable)
class UAthenaMapLayer : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULocalPlayer* LocalPlayer;
    
public:
    UAthenaMapLayer();
    UFUNCTION(BlueprintCallable)
    void SetLocalPlayer(ULocalPlayer* NewLocalPlayer);
    
    UFUNCTION(BlueprintCallable)
    void FlashPlayerIcon();
    
    UFUNCTION(BlueprintCallable)
    void ClearTouches();
    
};

