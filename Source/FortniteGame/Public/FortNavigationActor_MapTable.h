#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortEventLevelNavigationActor.h"
#include "FortNavigationActor_MapTable.generated.h"

class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class FORTNITEGAME_API AFortNavigationActor_MapTable : public AFortEventLevelNavigationActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ApolloMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ReferencePlane;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ApolloMapMinLoc;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ApolloMapMaxLoc;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector UnscaledPlaneExtent;
    
public:
    AFortNavigationActor_MapTable();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActiveEventsChanged();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleActiveEventsChanged(const TArray<FString>& ActiveEventFlags);
    
};

