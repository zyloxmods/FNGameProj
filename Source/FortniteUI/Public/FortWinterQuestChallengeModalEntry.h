#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortWinterQuestChallengeModalEntry.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortWinterQuestChallengeModalEntry : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_QuestTitle;
    
public:
    UFortWinterQuestChallengeModalEntry();
};

