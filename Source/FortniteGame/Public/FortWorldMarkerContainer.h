#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "FortWorldMarkerData.h"
#include "FortWorldMarkerContainer.generated.h"

class UAthenaMarkerComponent;

USTRUCT(BlueprintType)
struct FFortWorldMarkerContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortWorldMarkerData> Markers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    UAthenaMarkerComponent* OwningComponent;
    
public:
    FORTNITEGAME_API FFortWorldMarkerContainer();
};

