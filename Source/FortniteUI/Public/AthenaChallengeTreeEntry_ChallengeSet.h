#pragma once
#include "CoreMinimal.h"
#include "FortChallengeSetStyle.h"
#include "AthenaChallengeListEntryBase.h"
#include "AthenaChallengeTreeEntry_ChallengeSet.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeTreeEntry_ChallengeSet : public UAthenaChallengeListEntryBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ChallengeSetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ChallengeSetContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PercentComplete;
    
public:
    UAthenaChallengeTreeEntry_ChallengeSet();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChallengeSetEstablished(const FFortChallengeSetStyle& DisplayStyle);
    
};

