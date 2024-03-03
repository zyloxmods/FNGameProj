#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CreativeMiniMapComponentIconData.h"
#include "FortMiniMapComponent.h"
#include "FortMiniMapIndicatorTextProperties.h"
#include "CreativeMiniMapComponent.generated.h"

class UCreativeMinimapComponentIconList;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCreativeMiniMapComponent : public UFortMiniMapComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FFortMiniMapIndicatorTextProperties IndicatorTextProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IconData, meta=(AllowPrivateAccess=true))
    FCreativeMiniMapComponentIconData IconData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCreativeMinimapComponentIconList* IconList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> LoadedMIDs;
    
public:
    UCreativeMiniMapComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIndicatorTextOffset(const FVector2D& IndicatorTextOffset);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIndicatorTextColor(const FLinearColor& IndicatorTextColor);
    
    UFUNCTION(BlueprintCallable)
    void SetIndicatorText(const FText& IndicatorText);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IconData();
    
};

