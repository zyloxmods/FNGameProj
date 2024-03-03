#pragma once
#include "CoreMinimal.h"
#include "BuildingProp.h"
#include "FortSkyTubeAnchor.generated.h"

UCLASS(Blueprintable)
class AFortSkyTubeAnchor : public ABuildingProp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExemptFromShutdown;
    
public:
    AFortSkyTubeAnchor();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnEnabledChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExemptFromShutdown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
};

