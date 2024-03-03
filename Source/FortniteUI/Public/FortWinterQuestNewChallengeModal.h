#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortWinterQuestNewChallengeModal.generated.h"

class UCommonButton;
class UDynamicEntryBox;
class UScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortWinterQuestNewChallengeModal : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_Quests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Quests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_CloseModal;
    
public:
    UFortWinterQuestNewChallengeModal();
};

