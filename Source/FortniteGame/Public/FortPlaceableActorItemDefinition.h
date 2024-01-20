#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "BuildingDuplicationData.h"
#include "FortItemDefinition.h"
#include "FortPlaceableActorItemDefinition.generated.h"

class UFortPlaceableActorItemDefinition;

UCLASS(Blueprintable, MinimalAPI)
class UFortPlaceableActorItemDefinition : public UFortItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* BasePlaceableActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush DisplayImage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorName;
    
public:
    UFortPlaceableActorItemDefinition();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetActorName() const;
    
    UFUNCTION(BlueprintCallable)
    static UFortPlaceableActorItemDefinition* CreatePlaceableActorItemDefinitionFromActor(FBuildingDuplicationData DuplicationData, FSlateBrush ImageToDisplay);
    
};

