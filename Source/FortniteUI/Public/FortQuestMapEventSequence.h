#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Templates/SubclassOf.h"
#include "FortQuestMapEventSequence.generated.h"

class UFortQuestMapEventDot;
class UHorizontalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortQuestMapEventSequence : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox_DotBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortQuestMapEventDot> DotWidgetClass;
    
public:
    UFortQuestMapEventSequence();
};

