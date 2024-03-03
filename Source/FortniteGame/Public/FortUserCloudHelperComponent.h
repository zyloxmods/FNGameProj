#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortUserCloudHelperComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Within=FortWorldManager, meta=(BlueprintSpawnableComponent))
class UFortUserCloudHelperComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 LastIssuedRequestHandle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SaveSizeCompressionThreshold;
    
public:
    UFortUserCloudHelperComponent();
};

