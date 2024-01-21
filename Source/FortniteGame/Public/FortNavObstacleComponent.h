#pragma once
#include "CoreMinimal.h"
#include "NavRelevantComponent.h"
#include "Templates/SubclassOf.h"
#include "FortNavObstacleComponent.generated.h"

class UNavArea;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortNavObstacleComponent : public UNavRelevantComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> ObstacleAreaClass;
    
    UFortNavObstacleComponent();
};

