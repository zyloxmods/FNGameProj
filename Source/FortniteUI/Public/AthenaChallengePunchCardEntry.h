#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortChallengePunchCardStyles.h"
#include "AthenaChallengePunchCardEntry.generated.h"

class UCommonRichTextBlock;
class UCommonTextBlock;
class UFortLazyImage;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaChallengePunchCardEntry : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IconParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBeingPlaced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_RewardQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_UnlockDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* LazyImage_Stamp;
    
public:
    UAthenaChallengePunchCardEntry();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetToDefaultSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStyle(const FFortChallengePunchCardStyles& PunchStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsNonsequentialSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsLastSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsFirstSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlacedEntry();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedPlacingEntry();
    
};

