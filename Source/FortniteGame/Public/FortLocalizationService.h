#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "ProcessedTranslations.h"
#include "ReplicatedLocalizedDocument.h"
#include "FortLocalizationService.generated.h"

UCLASS(Blueprintable)
class AFortLocalizationService : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FString> DocumentLoadInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FReplicatedLocalizedDocument> TranslationsReadyToSendToTheClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FProcessedTranslations> AvailableTranslationsOnTheClient;
    
public:
    AFortLocalizationService();
};

