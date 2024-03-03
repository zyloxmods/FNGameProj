#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFortWorldMarkerType.h"
#include "FortWorldMarkerData.h"
#include "MarkedActorDisplayInfo.h"
#include "FortMarkerDetailsTable.generated.h"

class AActor;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMarkerDetailsTable : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortWorldMarkerType, FMarkedActorDisplayInfo> DefaultMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AActor>, FMarkedActorDisplayInfo> DetailsForClass;
    
    UFortMarkerDetailsTable();
    UFUNCTION(BlueprintCallable)
    FMarkedActorDisplayInfo GetDisplayInfoForMarkerData(const FFortWorldMarkerData& MarkerData);
    
};

