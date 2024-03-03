#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortCuriePackedGrassDataArray.h"
#include "FortCurieSpatialCellIndex.h"
#include "FortStaticReplicatedActor.h"
#include "FortCurieGrassFireReplicator.generated.h"

UCLASS(Blueprintable)
class AFortCurieGrassFireReplicator : public AFortStaticReplicatedActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PackedDataArray, meta=(AllowPrivateAccess=true))
    FFortCuriePackedGrassDataArray PackedDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MinGrassGridIndex, meta=(AllowPrivateAccess=true))
    FFortCurieSpatialCellIndex MinGrassGridIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxGrassGridIndex, meta=(AllowPrivateAccess=true))
    FFortCurieSpatialCellIndex MaxGrassGridIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GrassGridOrigin, meta=(AllowPrivateAccess=true))
    FVector GrassGridOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GrassGridCellSize, meta=(AllowPrivateAccess=true))
    FVector GrassGridCellSize;
    
public:
    AFortCurieGrassFireReplicator();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PackedDataArray();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MinGrassGridIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxGrassGridIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GrassGridOrigin();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GrassGridCellSize();
    
};

