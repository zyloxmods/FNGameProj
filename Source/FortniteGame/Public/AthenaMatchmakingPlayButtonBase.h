#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FortPublicAccountInfo.h"
#include "AthenaMatchmakingPlayButtonBase.generated.h"

class UImage;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEGAME_API UAthenaMatchmakingPlayButtonBase : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Mobile_FTUE_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Mobile_FTUE_Idle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Mobile_FTUE_Anim;
    
public:
    UAthenaMatchmakingPlayButtonBase();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleCurrentlyViewedAccountInfoChanged(FFortPublicAccountInfo NewInfo);
    
};

