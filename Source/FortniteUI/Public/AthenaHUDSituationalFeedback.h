#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "AthenaHUDSituationalFeedback.generated.h"

class UFortDynamicEntryBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaHUDSituationalFeedback : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDynamicEntryBox* EntryBox_Feedback;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrecreateFeedbackEntries;
    
public:
    UAthenaHUDSituationalFeedback();
};

