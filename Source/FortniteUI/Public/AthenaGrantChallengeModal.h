#pragma once
#include "CoreMinimal.h"
#include "FortChallengeSetStyle.h"
#include "FortMessageReceivedScreen.h"
#include "AthenaGrantChallengeModal.generated.h"

class UCommonTextBlock;
class UFortChallengeBundleItemDefinition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaGrantChallengeModal : public UFortMessageReceivedScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortChallengeBundleItemDefinition*> BundleDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ChallengeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ChallengeContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_BodyCopy;
    
public:
    UAthenaGrantChallengeModal();
protected:
    UFUNCTION(BlueprintCallable)
    void ShowNextChallengePopup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChallengeBundleSet(const FFortChallengeSetStyle& DisplayStyle);
    
};

