#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortIslandLocalizationComponent.generated.h"

class UFortLevelSaveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortIslandLocalizationComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLevelSaveComponent* SaveComponent;
    
public:
    UFortIslandLocalizationComponent();
};

