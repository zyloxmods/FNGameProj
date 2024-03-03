#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortTooltipLoadingWrapper.generated.h"

class UFortTooltip;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortTooltipLoadingWrapper : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTooltipAssetsLoaded);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTooltipAssetsLoaded OnTooltipAssetsLoaded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* SourceObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortTooltip* TooltipInstance;
    
public:
    UFortTooltipLoadingWrapper();
private:
    UFUNCTION(BlueprintCallable)
    void HandleTooltipAssetLoaded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAssetsLoaded() const;
    
};

