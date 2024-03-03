#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortQuestMapEventDot.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortQuestMapEventDot : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ActiveDot;
    
public:
    UFortQuestMapEventDot();
};

