#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ELevelSaveRecordVersion : uint8 
{
	TimestampConversion,
	SoftActorClassReferences,
	SoftActorComponentClassReferences,
	DuplicateNewActorRecordsRemoved,
	StartOfResaveWhenNotLatestVersion,
	LowerCloseThresholdForDuplicates,
	DeprecatedDeleteAndNewActorRecords,
	DependenciesFromSerializedWorld,
	RemovingSerializedDependencies,
	AddingVolumeInfoRecordsMap,
	AddingVolumeGridDependency,
	AddingScale,
	AddingDataHash,
	AddedIslandTemplateId,
	AddedLevelStreamedDeleteRecord,
	UsingSaveActorGUID,
	UsingActorFNameForEditorSpawning,
	VersionPlusOne,
	LatestVersion,
	ELevelSaveRecordVersion_MAX,
};
