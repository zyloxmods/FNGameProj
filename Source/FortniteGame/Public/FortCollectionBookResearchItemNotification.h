#pragma once
#include "CoreMinimal.h"
#include "FortCollectionBookResearchItemNotification.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortCollectionBookResearchItemNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ResearchedItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ResearchedTemplateId;
    
    FFortCollectionBookResearchItemNotification();
};

