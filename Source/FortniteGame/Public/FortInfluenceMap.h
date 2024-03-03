#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "FortInfluenceMap.generated.h"

class AFortNavigationGraph;

UCLASS(Blueprintable)
class UFortInfluenceMap : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortNavigationGraph* GraphData;
    
public:
    UFortInfluenceMap();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void K2_GetInfluenceSourcePositions(UObject* WorldContext, TArray<FVector>& InfluenceSourcePositions);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void K2_AddInfluenceSource(UObject* WorldContext, const FVector& position, const FString& SourceName, float Strength);
    
};

