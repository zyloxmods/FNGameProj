#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortWinterQuestDayCounter.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortWinterQuestDayCounter : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_DayCounter;
    
public:
    UFortWinterQuestDayCounter();
};

