#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ProceduralPointCloudPoint.h"
#include "ProceduralPointCloud.generated.h"

UCLASS(Blueprintable)
class UProceduralPointCloud : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProceduralPointCloudPoint> Points;
    
    UProceduralPointCloud();
    UFUNCTION(BlueprintCallable)
    TArray<FProceduralPointCloudPoint> GetPointsByTag(FName InTag);
    
    UFUNCTION(BlueprintCallable)
    void Empty();
    
};

