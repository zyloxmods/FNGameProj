#pragma once
#include "CoreMinimal.h"
#include "AthenaChallengeListEntryBase.h"
#include "EChallengeListSection.h"
#include "AthenaChallengeListEntry_Header.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeListEntry_Header : public UAthenaChallengeListEntryBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SectionTitle;
    
public:
    UAthenaChallengeListEntry_Header();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSectionTypeSet(EChallengeListSection SectionType);
    
};

