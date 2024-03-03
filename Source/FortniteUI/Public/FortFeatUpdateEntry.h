#pragma once
#include "CoreMinimal.h"
#include "FortQuestUpdateEntry.h"
#include "FortFeatUpdateEntry.generated.h"

class UImage;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortFeatUpdateEntry : public UFortQuestUpdateEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_QuestIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_QuestName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_QuestDescription;
    
public:
    UFortFeatUpdateEntry();
};

