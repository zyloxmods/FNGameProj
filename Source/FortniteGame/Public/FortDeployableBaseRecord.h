#pragma once
#include "CoreMinimal.h"
#include "FortActorRecord.h"
#include "FortGenericRecord.h"
#include "FortDeployableBaseRecord.generated.h"

UCLASS(Blueprintable)
class UFortDeployableBaseRecord : public UFortGenericRecord {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortActorRecord> Actors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bNeedsFullActorSave: 1;
    
public:
    UFortDeployableBaseRecord();
};

