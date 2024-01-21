#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "FortAIDataProvider_AIDirector.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortAIDataProvider_AIDirector : public UAIDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIRelevantDistanceToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EncounterRelevantDistanceToPlayer;
    
    UFortAIDataProvider_AIDirector();
};

