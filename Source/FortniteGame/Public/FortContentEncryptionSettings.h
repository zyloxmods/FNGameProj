#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "FortContentEncryptionCollection.h"
#include "FortContentEncryptionSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, NotPlaceable, Config=Game)
class UFortContentEncryptionSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoEncryptUnreleasedStoreItems;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetType> AutoEncryptPrimaryAssetTypes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortContentEncryptionCollection> Collections;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EncryptedGameFeaturePluginNames;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BackendURLs;
    
    UFortContentEncryptionSettings();
};

