#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortTournamentQueueComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortTournamentQueueComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFortTournamentQueueComponent();
};

