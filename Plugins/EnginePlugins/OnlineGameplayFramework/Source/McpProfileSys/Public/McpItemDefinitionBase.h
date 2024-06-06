#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "McpItemDefinitionBase.generated.h"

UCLASS(Blueprintable)
class MCPPROFILESYS_API UMcpItemDefinitionBase : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
#if WITH_EDITORONLY_DATA
    UPROPERTY(VisibleAnywhere, DisplayName="Template ID / Persistent Name", Category="Item")
    FString EditorTemplateId;
#endif
    UMcpItemDefinitionBase(const FObjectInitializer& ObjectInitializer);
};

