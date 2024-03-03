#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FortChallengeSetStyle.h"
#include "AthenaChallengeScreenTileBase.generated.h"

class UCommonTextBlock;
class UFortLazyImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeScreenTileBase : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ChallengeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* LazyImage_RewardPreview;
    
public:
    UAthenaChallengeScreenTileBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetToLocked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnContainsPartyAssistedChallengeChanged(bool bHasPartyAssistedChallenge);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChallengeSetEstablished(const FFortChallengeSetStyle& DisplayStyle, bool bIsComplete, bool bIsLocked);
    
};

