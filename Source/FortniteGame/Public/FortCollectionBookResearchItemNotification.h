#pragma once
#include "CoreMinimal.h"
#include "FortCollectionBookResearchItemNotification.generated.h"

USTRUCT(BlueprintType)
struct FFortCollectionBookResearchItemNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ResearchedItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ResearchedTemplateId;
    
    FORTNITEGAME_API FFortCollectionBookResearchItemNotification();
};

