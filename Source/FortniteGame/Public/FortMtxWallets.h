#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EAppStore.h"
#include "EFortMtxPlatform.h"
#include "FortMtxPlatformList.h"
#include "FortMtxWallets.generated.h"

UCLASS(Blueprintable, Config=Game)
class FORTNITEGAME_API UFortMtxWallets : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortMtxPlatform, FFortMtxPlatformList> SharedWallets;
    
public:
    UFortMtxWallets();
    UFUNCTION(BlueprintCallable)
    static void SetSelectedAppStore(const TEnumAsByte<EAppStore::Type> InAppStore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSelectedAppStore(TEnumAsByte<EAppStore::Type>& OutAppStore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<TEnumAsByte<EAppStore::Type>> GetAvailableAppStores();
    
};

