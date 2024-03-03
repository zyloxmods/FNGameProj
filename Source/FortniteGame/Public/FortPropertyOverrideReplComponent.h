#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PropertyOverrideDataRepl.h"
#include "FortPropertyOverrideReplComponent.generated.h"

class AFortPropertyOverrideReplShared;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortPropertyOverrideReplComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPropertyOverrideDataRepl PendingReplOverrides;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPropertyOverrideReplShared* ReplOverrideData;
    
public:
    UFortPropertyOverrideReplComponent();
};

