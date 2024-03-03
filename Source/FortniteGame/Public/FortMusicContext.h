#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "UObject/NoExportTypes.h"
#include "ActiveMusicPackChangedDelegateDelegate.h"
#include "FortMusicContext.generated.h"

class UAthenaMusicPackItemDefinition;

UCLASS(Blueprintable, NonTransient)
class FORTNITEGAME_API UFortMusicContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveMusicPackChangedDelegate OnMusicPackChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaMusicPackItemDefinition* DesiredActiveMusicPack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetId> LoadedPacks;
    
public:
    UFortMusicContext();
    UFUNCTION(BlueprintCallable)
    void SetActiveMusicPack(const UAthenaMusicPackItemDefinition* NewMusicPack, float StartTimeOffset);
    
    UFUNCTION(BlueprintCallable)
    bool IsDefaultMusicEquipped();
    
    UFUNCTION(BlueprintCallable)
    UAthenaMusicPackItemDefinition* GetEquippedMusicPack();
    
};

